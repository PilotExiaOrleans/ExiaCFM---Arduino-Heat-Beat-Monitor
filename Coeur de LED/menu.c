#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu(int choix)
{
    printf("Ouverture du menu\n\n0 - Toutes les LEDs s'allument au rythme du pouls de la personne\n1 - Une LED sur 2 s'allume\n");
    printf("2 - Une LED sur 3 s'allume\n3 - Choisissez quelle LED va s'allumer\n");
    printf("4 - Allumage sous forme de chenille\n5 - Affichage de haut en bas\n");
    scanf("%d", &choix);
    switch (choix)
    {
        case 0 : Toutes_les_LEDs_allumees();break;
		case 1 : Une_LED_sur_2_allumee();break;
		case 2 : Une_LED_sur_3_allumee();break;
		case 3 : Une_LED_allumee_au_choix();break;
		case 4 : Chenille();break;
		case 5 : Chargement();break;
        default : return 0;
    }
}
