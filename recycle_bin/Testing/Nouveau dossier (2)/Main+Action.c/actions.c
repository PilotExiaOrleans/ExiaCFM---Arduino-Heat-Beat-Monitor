#include <stdio.h>
#include <stdlib.h>

void tri_bulles(int tab[], int taille)
{
    short tab_en_ordre = 0;
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
*/
void rechercheDichotomique(int tab[], int nbVal, int val)
    {
    short trouve; //faux tant que la valeur n'est pas trouvée.
    int id; //indice de début.
    int ifin; // indice de fin.
    int im; //indice de milieu.

    trouve = -1; //La valeur n'est pas trouvée.
    id = 0; // intervalle de recherche compris entre 0,
    ifin = nbVal; // ,et nbVal.

    while(!trouve && ((ifin) > 1))
    {
        im = (id + ifin)/2; //Détermine l'indice de milieu.
        trouve = (tab[im] <= val); //On vérifie si la valeur souhaiter se trouve à cet indice.

        if(tab[im] > val)ifin = im;

        else id = im;
    }
    if(tab[id] == val) return id;
    else return(-1);

}
/*
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
