#include <Arduino.h>
#include "coeur.h"
#include "param.h"

void AffichagePulsations (int ???)
{
    switch(LEDPARAM)
    case 1:Toutes_les_LEDs_allumees(???);break;
    case 2:Une_LED_sur_2_allumee(???);break;
    case 3:Une_LED_sur_3_allumee(???);break;
    case 4:Une_LED_allumee_au_choix(???);break;
    case 5:Chenille(???);break;
    case 6:Chargement(???);break;
}

void Toutes_les_LEDs_allumees(???)
{
    int i;
    for(i = 2; i <= 11 ; i++)
    {
      if(??? > 500)
      {
        digitalWrite(i, HIGH);
      }
      else
      {
        digitalWrite(i, LOW);
      }
}

// Generation param.h 1 LED sur 2 Allumee
void Une_LED_sur_2_allumee(???)
{
  int i;
  for (int i=2;i<12;i+=2)
  {
    if(??? > 500)
    {
      digitalWrite(i, HIGH);
    }
   
    digitalWrite(i, LOW);
  }
}

// Generation param.h 1 LED sur 3 Allumee
void Une_LED_sur_3_allumee(???)
{
  int i;
  while( i<12)
  {
    if(??? > 500)
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

// Generation param.h 1 LED Allumee Au Choix
void Une_LED_allumee_au_choix(???)
{
  
}

// Generation param.h Mode Chenille
void Chenille(???)
{
  int i;
  for (int i=2;i<12;i+=1)
  {
    if(??? > 500)
    {
      digitalWrite(i, HIGH); 
    }

    digitalWrite(i, LOW);
  }
  
}

// Generation param.h Mode Chargement
void Chargement(???)
{
  
    for (int i=2 ; i<8 ; i++)
    {
      if (i==2 || i==7)
      {
        if(??? > 500)
        {
          digitalWrite(i, HIGH); 
        }
      }
      else
      {
        if(??? > 500)
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
