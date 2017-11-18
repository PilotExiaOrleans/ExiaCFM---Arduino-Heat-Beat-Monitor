#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnee.h"
#include "actions.h"

void menu(structure tab[],int n)
{
    int choix;
    while (choix!=6)
    {
        printf("Ouverture du menu\n\n0 - Affiche toutes les donn%ces dans l'ordre du fichier\n1 - Affiche les donn%ces dans l'ordre croissant ou d%ccroissant\n",130, 130, 130);
        printf("2 - Affiche le pouls en fonction du temps recherch%c\n3 - Donne la moyenne du pouls\n", 130);
        printf("4 - Affiche le nombre de lignes de donn%ces actuellement en m%cmoire\n5 - Affiche les maximum et minimums du pouls\n", 130, 130);
        printf("6 - Quitter l'application\n\n");

        scanf("%d", &choix);    //Demande a l'utilisateur de choisir le mode d'affichage
        system("cls");
        switch (choix)          //Appel de la fonction voulue
        {
            case 0 : Donnee_ordre_du_fichier(tab, n);break;
            case 1 : Ordre_croissant_ou_decroissant(tab, n);break;
            case 2 : Rechercher_et_afficher_donnees_en_fonction_du_temps(tab, n);break;
            case 3 : Moyenne_pouls(tab, n);break;
            case 4 : Afficher_nbr_lignes_de_donnees(tab, n);break;
            case 5 : Max_et_Min_pouls(tab, n);break;
            case 6 : return 0;
            default : printf("Le choix n'est pas valide\n");
        }
        system("PAUSE");
        system("cls");
    }
}

