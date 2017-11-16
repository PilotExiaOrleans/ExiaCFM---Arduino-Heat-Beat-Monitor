//#include "cardio.h"
//#include "cardio.c"
#include "simulateur.c"

int valeur_intermediaire = 0;
long temps_intermediaire = 0;
//long temps_repere = 0;
//short etat = 0;
int seuil = 0;
int entree_analogique;
int v= 0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}


void loop() {

  int valeur_repere, repere_battement=10000;
  long temps_debut_battement;  

  if (seuil >= repere_battement)                //Si repere dépasse notre encadrement, il est reinitialisé
  {  
    seuil = 0;
  }
  entree_analogique = Simulation(v,seuil,repere_battement);
  seuil++;
  valeur_repere = 500;
  if (entree_analogique > valeur_repere) {  
    if (valeur_intermediaire <= valeur_repere) {  
      temps_debut_battement = millis();
      if (temps_debut_battement > (temps_intermediaire + 250)){  
        long poul = (1000.0 * 60.0) / (temps_debut_battement - temps_intermediaire);
        Serial.println(temps_debut_battement);
        Serial.println(poul);
        temps_intermediaire = temps_debut_battement;
      }
    }
  }

  valeur_intermediaire = entree_analogique;

}
