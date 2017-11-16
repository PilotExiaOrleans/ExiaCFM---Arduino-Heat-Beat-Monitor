#include <stdio.h>
#include <stdlib.h>

void menu(int choix)
{
    printf("Ouverture du menu\n\n0 - Affiche toutes les LEDs dans l'ordre du fichier\n1 - Affiche les donn%ces dans l'ordre croissant ou d%ccroissant\n", 130, 130);
    printf("2 - Affiche les donn%ces en fonction du temps\n3 - Donne la moyenne du pouls\n", 130);
    printf("4 - Affiche le nombre de lignes de donn%ces actuellement en m%cmoire\n5 - Affiche les maximum et minimums du pouls\n", 130, 130);
    scanf("%d", &choix);
    switch (choix)
    {
        case 0 : Donnee_dans_l_ordre_du_fichier(structure tab[], int n);break;
		case 1 : Ordre_croissant_ou_decroissant(structure tab[], int n);break;
		case 2 : Rechercher_et_afficher_donnees_en_fonction_du_temps(structure tab[], int n);break;
		case 3 : Moyenne_pouls(structure tab[], int n);break;
		case 4 : Afficher_nbr_lignes_de_donnees(structure tab[], int n);break;
		case 5 : Max_et_Min_pouls(structure tab[], int n);break;
        default : return 0;
    }
}

