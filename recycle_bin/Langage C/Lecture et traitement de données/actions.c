#include <stdio.h>
#include <stdlib.h>

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



/*
void Donnee_dans_l_ordre_du_fichier()
{

}
void Ordre_croissant_ou_decroissant()
{

}
void Rechercher_et_afficher_donnees_en_fonction_du_temps()
{

}
void Moyenne_pouls()
{

}
void Afficher_nbr_lignes_de_donnees()
{

}
void Max_et_Min_pouls()
{

}
*/
