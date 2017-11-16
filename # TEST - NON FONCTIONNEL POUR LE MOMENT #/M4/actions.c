#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnee.h"

void tri_bulles(int tab[])
{
    short tab_en_ordre = 0;
    int taille = sizeof(tab);
    int i;
    int temp;
    while(!tab_en_ordre)
    {
        tab_en_ordre = 1;
        int i;
        for(i=0 ; i < taille-1 ; i++)
        {
            if(tab[i] > tab[i+1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                tab_en_ordre = 0;
            }
        }
        taille--;
    }

}


void Donnee_dans_l_ordre_du_fichier(structure tab[], int n)
{
    int i;
    printf("Temps : \t");
    for(i=0;i<n;i++)
    {
        printf(" \t%d |",tab[i].temps);
    }
    printf("\n");
    printf("Pouls :");
    for(i=0;i<n;i++)
    {
        printf(" \t%d |", tab[i].pouls);
    }

}

/*
void Ordre_croissant_ou_decroissant(structure tab[], int n)
{

}
*/

void Rechercher_et_afficher_donnees_en_fonction_du_temps(structure tab[], int n)
{
    int tempsvoulu,i,k;
    printf("Merci d'inserer un temps specifique (en ms) :");
	scanf("%d",&tempsvoulu);

	for(i=0;i<n;i++)
	{
        if (tempsvoulu==tab[i].temps)
	    {
            k=i;
        }
	}

	 printf("Le pouls mesure a %d ms est de  : %d BPM.",tempsvoulu,tab[k].pouls);
}

/*
void Moyenne_pouls(structure tab[], int n)
{

}
*/

void Afficher_nbr_lignes_de_donnees (int n) // Fonction lecture en memoire du nombre de lignes
{
    printf("Nombre de ligne : %d",n);
}

/*
void Max_et_Min_pouls(structure tab[], int n)
{

}
*/
