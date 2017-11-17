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
<<<<<<< HEAD
    menu(&choix); // Ouverture du menu + choix de l'utilisateur, entre dans la variable choix
    setParam(&choix); // Creation param.h avec la valeur de choix
    printf("Done !\n\n");
    system("PAUSE");
=======
    menu(choix); // Ouverture du menu + choix
    setParam(choix); // Creation param.h
>>>>>>> 5a6c5f7d270f7383ef010ec58574d9d4d7405e4d
    return 0; // Fin Main
}
