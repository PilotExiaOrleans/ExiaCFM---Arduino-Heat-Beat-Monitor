#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main()
{
    int choix = 0; // Choix par defaut
    printf("Bienvenue ! \nCe programme permet de choisir la fa%con d'allumage des LEDs pour repr%csenter le pouls de la personne\n",135, 130); // Permet d'afficher les caractères spéciaux
    menu(&choix); // Ouverture du menu + choix
    setParam(&choix); // Creation param.h
    return 0; // Fin Main
}
