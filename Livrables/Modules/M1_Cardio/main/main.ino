#include "cardio.c"
#include "simulateur.c"

int valeur_intermediaire = 0;
long temps_intermediaire = 0;
int seuil = 0;
int entree_analogique;
int v= 0;
int valeur_repere, repere_battement=10000;
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
  if (choix == 0)
  {
    entree_analogique = analogRead(0);
  }
  else if (choix == 1)
  {
    entree_analogique = Simulation(v,seuil,repere_battement);
  }
  else
  {
    Serial.println("Ce n'est pas un choix valide");
  }
  seuil++;
  valeur_repere = 500;
  if (entree_analogique > valeur_repere) {  
    if (valeur_intermediaire <= valeur_repere) {  
      temps_debut_poul = millis();
      if (temps_debut_poul > (temps_intermediaire + 200)){  
        long poul = CalculPoul(temps_debut_poul, temps_intermediaire);
        Serial.println(temps_debut_poul);
        Serial.println(poul);
        temps_intermediaire = temps_debut_poul;
      }
    }
  }

  valeur_intermediaire = entree_analogique;

}

/*
