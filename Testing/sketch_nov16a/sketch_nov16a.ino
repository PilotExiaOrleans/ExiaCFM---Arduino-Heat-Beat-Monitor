//#include "cardio.h"
//#include "cardio.c"

int valeur_intermediaire = 0;
long temps_intermediaire = 0;
long temps_repere = 0;
short etat = 0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}


void loop() {

  int entree_analogique, valeur_repere;
  long temps_debut_battement;

  entree_analogique = Simulation(temps_repere, etat);
  valeur_repere = 500;
  if (entree_analogique > valeur_repere) {  
    if (valeur_intermediaire <= temps_intermediaire) {  
      temps_debut_battement = millis();
      if (temps_debut_battement > (temps_intermediaire + 200)){  
        Serial.println( (1000.0 * 60.0) / (temps_debut_battement - temps_intermediaire),0);
        temps_intermediaire = temps_debut_battement;
      }
    }
  }

  valeur_intermediaire = entree_analogique;

}
