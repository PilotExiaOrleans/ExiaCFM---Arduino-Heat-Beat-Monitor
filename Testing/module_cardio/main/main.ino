#include "cardio.cpp"

short etat = 0;
short valeur_intermediaire = 0;
int temps_fin_battement = 0; 
int temps_depart_battement = 0;
int i = 0;
int duree_battement=0;
int listeBattements[20][2];
int temps_depart_ecart = 0;
int temps_fin_ecart = 0;
int duree_ecart = 0;

void setup() {
  // Initialization . . .
  Serial.begin(9600);
  pinMode(A1, INPUT);
}

void loop() {
  int entree_analogique = analogRead(A0);
  if (entree_analogique <=511)
  {
    etat = 0;
  }
  else
  {
    etat = 1;
    DeterminationEcartenCours(temps_depart_ecart, temps_fin_ecart, duree_ecart)
  }
  
  if (etat != valeur_intermediaire)
  {
    short ComplementationValeurIntermediaire(valeur_intermediaire);
    int DeterminationPositionBattement(short etat, int temps_depart_battement,int temps_fin_battement);
    int FinalisationDeLaBoucle(int temps_depart_battement, int temps_fin_battement, int duree_battement, int temps_depart_ecart);
  }
  listeBattements[i][1] = duree_battement;
  listeBattements[i][2] = duree_ecart;
  Serial.println(listeBattements[i][1]);
  Serial.println(listeBattements[i][2]);
  i++;

}
