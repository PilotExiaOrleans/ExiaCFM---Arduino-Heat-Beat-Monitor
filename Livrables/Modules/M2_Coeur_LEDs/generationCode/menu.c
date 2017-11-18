/*
==================================================================================================
menu.c - Fonction contenant le menu permettant de choisir le type d'allumage des LEDs.
==================================================================================================
Last Verification : 17/11/2017
Authors : Joel DIDIER, Louis MARJOLET
Exia CESI A1 - Orleans
==================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu(unsigned int *choix)
{
    printf("Merci de choisir la façon dont les LEDs clignoteront en fonction du pouls.\n\n");
    printf("Ouverture du menu\n\n0 - Toutes les LEDs s'allument au rythme du pouls de la personne\n1 - Une LED sur 2 s'allume\n");
    printf("2 - Une LED sur 3 s'allume\n3 - Choisissez quelle LED va s'allumer\n");
    printf("4 - Allumage sous forme de chenille\n5 - Affichage de haut en bas\n");

    // Entree du choix par l'utilisateur
    scanf("%d", choix);

    // Si choix inconnu
    if (choix<0 || choix >5)
    {
        printf("Erreur - Choix inconnu. Le programme va se fermer.");
        system("PAUSE");
        exit(-1);
    }
}
