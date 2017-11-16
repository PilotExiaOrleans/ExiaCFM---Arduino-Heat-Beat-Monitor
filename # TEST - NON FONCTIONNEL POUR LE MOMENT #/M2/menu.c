#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu(int choix)
{
    printf("Merci de choisir la façon dont les LEDs clignoteront en fonction du pouls.\n\n")
    printf("Ouverture du menu\n\n0 - Toutes les LEDs s'allument au rythme du pouls de la personne\n1 - Une LED sur 2 s'allume\n");
    printf("2 - Une LED sur 3 s'allume\n3 - Choisissez quelle LED va s'allumer\n");
    printf("4 - Allumage sous forme de chenille\n5 - Affichage de haut en bas\n");

    // Entree du choix par l'utilisateur
    scanf("%d", &choix);
    // Choix et appel fonction correspondante
    do
    {
        printf("Choix inconnu . . .\n");
    }
    while(choix < 1 && choix > 5);
}
