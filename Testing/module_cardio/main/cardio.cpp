#include "cardio.h"


short ComplementationValeurIntermediaire(short valeur)
{
  if (valeur == 1)
    {
      return valeur = 0;
    }
    else
    {
      return valeur = 1;
    }
}


int DeterminationPositionBattement(short state, int depart,int fin)
{
  if (state == 1)
    {
      depart = millis();
      return depart;
    }
  else
    {
      fin = millis();
      return fin;
    }
}


int FinalisationDeLaBoucle(int depart, int fin, int dureeBattement, int departEcart)
{
if (fin !=0)
    {
      Serial.print("Temps de départ du battement :");
      Serial.println(depart);
      Serial.print("Temps de fin du battement :");
      Serial.println(fin);
      Serial.print("Durrée du battement :");
      dureeBattement = fin - depart;
      Serial.println(dureeBattement);
      depart = 0;
      fin = 0;
      return departEcart = millis();
    }
}


int DeterminationEcartenCours(int depart, int fin, int duree)
{
if (depart!=0)
    {
      fin=millis();
      return duree = fin - depart ;
    }
}
