/*
==================================================================================================
coeur.ino - Gere l'affichage des pulsations cardiaques sur l'afficheur.
Il recupere la valeur brute correspondant au pouls (etat haut) et declenche l'allumage des LEDs
suivant le choix effectue par l'utilisateur via param.h
==================================================================================================
Last Verification : 17/11/2017
Authors : Joel DIDIER, Louis MARJOLET
Exia CESI A1 - Orleans
==================================================================================================
*/

#include <Arduino.h>
#include "coeur.h"
#include "param.h"
#include "...\cardio.c"   //inclusion du programme cardio.c afin de récupérer les valeurs des pulsations

void AffichagePulsations (int LEDPARAM, int val_pouls)
{
    switch(LEDPARAM) // On recupere la valeur de LEDPARAM correspondant au choix de l'utilisateur
	// Rentre dans la fonction correspondante a LEDPARAM
    case 1:Toutes_les_LEDs_allumees(val_pouls);break;
    case 2:Une_LED_sur_2_allumee(val_pouls);break;
    case 3:Une_LED_sur_3_allumee(val_pouls);break;
    case 4:Une_LED_allumee_au_choix((val_pouls);break;
    case 5:Chenille(val_pouls);break;
    case 6:Chargement(val_pouls);break;
}

void Toutes_les_LEDs_allumees(int val_pouls)
{
    int i;
    for(i = 2; i <= 11 ; i++)
    {
      if((val_pouls == 1) // Si pulsation (valeur analogique) a l'etat haut ...
      {
        digitalWrite(i, HIGH);
      }
      else
      {
        digitalWrite(i, LOW);
      }
}

// Generation param.h 1 LED sur 2 Allumee
void Une_LED_sur_2_allumee(int val_pouls)
{
  int i;
  for (int i=2;i<12;i+=2)
  {
    if((val_pouls == 1) // Si pulsation (valeur analogique) a l'etat haut ...
    {
      digitalWrite(i, HIGH);
    }

    digitalWrite(i, LOW);
  }
}

// Generation param.h 1 LED sur 3 Allumee
void Une_LED_sur_3_allumee(int val_pouls)
{
  int i;
  while( i<12)
  {
    if((val_pouls == 1) // Si pulsation (valeur analogique) a l'etat haut ...
    {
      digitalWrite(i, HIGH);
    }

    digitalWrite(i, LOW);
    if (i>8)
    {
      i-=7;
    }
    else
    {
      i+=3;
  }
}

/*
// Generation param.h 1 LED Allumee Au Choix
void Une_LED_allumee_au_choix((val_pouls)
{

}
*/

// Generation param.h Mode Chenille
void Chenille(int val_pouls)
{
  int i;
  for (int i=2;i<12;i+=1)
  {
    if((val_pouls == 1) // Si pulsation (valeur analogique) a l'etat haut ...
    {
      digitalWrite(i, HIGH);
    }

    digitalWrite(i, LOW);
  }

}

// Generation param.h Mode Chargement
void Chargement(int val_pouls)
{

    for (int i=2 ; i<8 ; i++)
    {
      if (i==2 || i==7)
      {
        if((val_pouls == 1) // Si pulsation (valeur analogique) a l'etat haut ...
        {
          digitalWrite(i, HIGH);
        }
      }
      else
      {
        if((val_pouls == 1) // Si pulsation (valeur analogique) a l'etat haut ...
        {
          digitalWrite(i, HIGH);
          digitalWrite(14-i, HIGH);
        }

      }

    }
    for (int i=7 ; i>1 ; i--)
    {
      if (i==2 || i==7)
      {
        digitalWrite(i, LOW);
      }
      else
      {
        digitalWrite(i, LOW);
        digitalWrite(14-i, LOW);
      }

    }
}

void setup            //Initialisation des tous les ports
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
void loop
{
  AffichagePulsations (LEDPARAM, val_pouls);       //Appel de la fonction AffichagePulsations
}

