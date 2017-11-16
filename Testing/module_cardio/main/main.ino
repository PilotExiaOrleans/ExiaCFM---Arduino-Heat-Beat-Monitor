#include "cardio.c"
#include "simulateur.c.ino"

short etat = 0;
short valeur_intermediaire = 0;
long temps_actuel = 0;
long temps_fin_battement = 0; 
long temps_depart_battement = 0;
int i = 0;
long duree_battement=0;
int listeBattements[20][2];
long temps_depart_ecart = 0;
long temps_fin_ecart = 0;
long duree_ecart = 0;
long depart_chrono = 0;
short repere = 0;
long temps_repere = 0;

void setup() {
  // Initialization . . .
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  
  //int entree_analogique = analogRead(A0);
  int entree_analogiue = Simulation(temps_repere, repere, entree_analogique)
  if (entree_analogique <=511)
  {
    etat = 0;
  }
  else
  {
    etat = 1;
    temps_actuel = millis();
    DeterminationEcartenCours(temps_depart_ecart, temps_fin_ecart, duree_ecart, temps_actuel);
  }
  
  if (etat != valeur_intermediaire)
  {
    short ComplementationValeurIntermediaire(valeur_intermediaire);
    temps_actuel = millis();
    DeterminationPositionBattement(etat, temps_depart_battement, temps_fin_battement, temps_actuel);
    if (i == 0)
    {
      depart_chrono = millis();
    }
    if (temps_fin_battement !=0)
    {
      Serial.print("Temps de départ du battement :");
      Serial.println(temps_depart_battement);
      Serial.print("Temps de fin du battement :");
      Serial.println(temps_fin_battement);
      Serial.print("Durée du battement :");
      duree_battement = temps_fin_battement - temps_depart_battement;
      Serial.println(duree_battement);
      temps_depart_battement = 0;
      temps_fin_battement = 0;
      temps_depart_ecart = millis();
    }
  }
  
  listeBattements[i][1] = duree_battement;
  listeBattements[i][2] = duree_ecart;

  Serial.println(listeBattements[i][1]);
  Serial.println(listeBattements[i][2]);
  i++;

}
