/*
==================================================================================================
main.ino - Programme du capteur cardiaque
==================================================================================================
Last Verification : 17/11/2017
Authors : Vicente VAZ
Exia CESI A1 - Orleans
==================================================================================================
*/

#include "cardio.c"
#include "simulateur.c"

int valeur_intermediaire = 0;
long temps_intermediaire = 0;
int seuil = 0;
int entree_analogique;
int val_pouls;
int v= 0;
int valeur_repere = 500, repere_battement=10000;   
long temps_debut_poul;
int choix = 1;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}


void loop() {
  if (seuil >= repere_battement)                //Si repere dépasse notre encadrement, il est reinitialisé
  {  
    seuil = 0;
  }
  if (choix == 0)                               //Si on décide de générer les valeurs par le capteur
  {
    entree_analogique = analogRead(0);          //On affecte entree_analogique à la valeur analogique lue
  }
  else if (choix == 1)                          //Si on décide de générer les valeurs par le simulateur
  {
    entree_analogique = Simulation(v,seuil,repere_battement);   //On affecte entree_analogique à la valeur analogique simulée
  }
  else
  {
    Serial.println("Ce n'est pas un choix valide");   //Si le choix entré est incorrect, on envoie un message d'erreur
  }
  seuil++;                                            //On incrémente le seuil                             
  if (entree_analogique > valeur_repere) {            //On vérifie si entree_analogique est supérieur au repère afin de déterminer si du sang passe
    val_pouls = 1;                                    //On affecte 1 à val_pouls, utilisée dans le module 2 pour l'affichage des LED
    if (valeur_intermediaire <= valeur_repere) {      //On vérifie si le valeur du cycle de boucle précédent est inférieur au repere si oui, cela signifie qu'un nouveau battement commence
      temps_debut_poul = millis();                    //Le temps du debut du battement est affecté au temps qu'i s'est écoulé depuis l'exécution du programme
      if (temps_debut_poul > (temps_intermediaire + 200)){        //On détermine qu'il s'est écoulé 200 millisecondes depuis la mesure du début du battement précédent
        long poul = CalculPoul(temps_debut_poul, temps_intermediaire);      //On calcul le pouls à partir des informations récoltées
        Serial.print(temps_debut_poul);                                     //Affichage du temps associé au pouls
        Serial.print(";");                                                  //Affichage d'un ";" pour la lecture du port série par processing
        Serial.println(poul);                                               //Affichage du pouls
        temps_intermediaire = temps_debut_poul;                             //Le temps du pouls calculé est affecté comme étant le temps du battement précédent pour la boucle suivante
      }
    }
  }
  else       //Si entree_analogique est inférieure au repère, cela signife que du sang ne passe pas.
  {
    val_pouls = 0;      //On affecte 0 à al_pouls
  }

  valeur_intermediaire = entree_analogique;     //La valeur lue est affecté comme étant la valeur précédente pour la boucle suivante

}

  
