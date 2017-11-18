/*
==================================================================================================
main.c - Lance la fonction du choix du type d'allumage des LEDs puis lance la fonction d'ecriture
dans param.h
==================================================================================================
Last Verification : 17/11/2017
Authors : Joel DIDIER, Louis MARJOLET
Exia CESI A1 - Orleans
==================================================================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int main()
{
    int choix = 0; // Choix par defaut
    printf("Bienvenue ! \nCe programme permet de choisir la fa%con d'allumage des LEDs pour repr%csenter le pouls de la personne\n",135, 130); // Permet d'afficher les caractères spéciaux
    menu(&choix); // Ouverture du menu + choix de l'utilisateur, entre dans la variable choix
    setParam(&choix); // Creation param.h avec la valeur de choix
    printf("Done !\n\n");
    system("PAUSE");
    return 0;
}
