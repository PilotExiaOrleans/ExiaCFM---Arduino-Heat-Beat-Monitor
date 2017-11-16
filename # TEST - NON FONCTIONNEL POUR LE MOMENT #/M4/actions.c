#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnee.h"


void affichage_tableau(structure TABLEAU[], int TAILLE) // Cette fonction sert à afficher toutes le contenu d'un tableau structure
{
    int i;
    for (i=0; i> (TAILLE+1); i++)
    {
        printf("Pouls : %d\t/\tTemps : %d", TABLEAU[i].pouls, TABLEAU[i].temps); //Affichage des composantes de rang i+1
    }
}

//--------------------------------------------------------------------------------------

 // Cette fonction permet de trier les composantes temps par ordre croissant
void tri_bulles_croissant_par_temps(structure tabl[], int Taille)
{
    short tab_en_ordre = 0;
    int temp;
    while(!tab_en_ordre)
    {
        tab_en_ordre = 1;
        int i;
        for(i=0 ; i < Taille-1 ; i++)
        {
            if(tabl[i].temps > tabl[i+1].temps) //Si la valeur de rang i est supérieure à celle de rang i+1,
            {                                   //nous les interchangeons
                temp = tabl[i].temps;
                tabl[i].temps = tabl[i+1].temps;
                tabl[i+1].temps = temp;
                tab_en_ordre = 0;
            }
        }
        Taille-- ;
    }

}

//--------------------------------------------------------------------------------------

// Cette fonction permet de trier les composantes pouls par ordre croissant
void tri_bulles_croissant_par_pouls(structure tabl[], int Taille)
{
    short tab_en_ordre = 0;
    int temp;
    while(!tab_en_ordre)
    {
        tab_en_ordre = 1;
        int i;
        for(i=0 ; i < Taille-1 ; i++)
        {
            if(tabl[i].pouls < tabl[i+1].pouls) //Si la valeur de rang i est supérieure à celle de rang i+1,
            {                                   //nous les interchangeons
                temp = tabl[i].pouls;
                tabl[i].pouls = tabl[i+1].pouls;
                tabl[i+1].pouls = temp;
                tab_en_ordre = 0;
            }
        }
        Taille-- ;
    }

}

//--------------------------------------------------------------------------------------

// Cette fonction permet de trier les composantes temps par ordre décroissant
void tri_bulles_decroissant_par_temps(structure tabl[], int Taille)
{
    short tab_en_ordre = 0;
    int temp;
    while(!tab_en_ordre)
    {
        tab_en_ordre = 1;
        int i;
        for(i=0 ; i < Taille-1 ; i++)
        {
            if(tabl[i].temps < tabl[i+1].temps) //Si la valeur de rang i est inférieure à celle de rang i+1,
            {                                   //nous les interchangeons
                temp = tabl[i].temps;
                tabl[i].temps = tabl[i+1].temps;
                tabl[i+1].temps = temp;
                tab_en_ordre = 0;
            }
        }
        Taille-- ;
    }

}

//--------------------------------------------------------------------------------------

// Cette fonction permet de trier les composantes pouls par ordre décroissant
void tri_bulles_decroissant_par_pouls(structure tabl[], int Taille)
{
    short tab_en_ordre = 0;
    int temp;
    while(!tab_en_ordre)
    {
        tab_en_ordre = 1;
        int i;
        for(i=0 ; i < Taille-1 ; i++)
        {
            if(tabl[i].pouls < tabl[i+1].pouls )//Si la valeur de rang i est inférieure à celle de rang i+1,
            {                                   //nous les interchangeons
                temp = tabl[i].pouls ;
                tabl[i].pouls  = tabl[i+1].pouls ;
                tabl[i+1].pouls  = temp;
                tab_en_ordre = 0;
            }
        }
        Taille-- ;
    }

}

//--------------------------------------------------------------------------------------

//Cette fonction tri et recherche un pouls en fonction de son temps correspondant
int Rechercher_et_afficher_donnees_en_fonction_du_temps(structure tab[], int nbVal, int val, int nb_lignes)
    {
    tri_bulles_croissant_par_temps(tab, nb_lignes); //tri du tableau
    int position;
    int id, ifin, im; //indice de début, indice de fin et indice de milieu.
    id = 0;         // intervalle de recherche compris entre 0,
    ifin = nbVal-1; // ,et nbVal.
    position = -1;  //position initialisée à -1
    while ((id<=ifin) && (position==-1))    //tant que nous ne sommes pas arrivés à la fin de l'intervalle et que position n'a pas changé
        {
         im=(ifin+id)/2;                    //calcul du milieu de l'intervalle
         if (val < tab[im].temps)           //determine si la valeur cherchée est inférieure ou supérieure au milieu de l'intervalle
               ifin=im-1;
         else if (val > tab[im].temps)
               id=im+1;
         else                               //Si elle n'est ni supérieure ni inférieure, elle est égale,
               position=im;                 //le pouls cherché est trouvé
        }
    if (position != -1)                     //Si la valeur est trouvée, on la retourne

        return (tab[position].pouls);

    else                                    //Sinon cela signifie que la valeur n'existe pas

        printf("Cette valeur n'est pas presente dans le tableau");
        return -1;
}

//--------------------------------------------------------------------------------------

//Cette fonction affiche les données dans l'ordre dans lequel elles apparaissent dans le fichier
void Donnee_ordre_du_fichier(structure tab[], int nb_lignes)
{
   affichage_tableau(tab, nb_lignes);   //Appel de la fonction réalisant cette tâche
}

//--------------------------------------------------------------------------------------

//Cette fonction permet à l'utilisateur de chosir entre 4 modes d'affichage...
void Ordre_croissant_ou_decroissant(structure tab[], int nb_lignes)
{
    int choix1, choix2, i;
    printf("Si ordre croissant, inserer 0 \n Si ordre decroissant, inserer 1\n");
    scanf("%d", &choix1);
    printf("Si le temps doit etre trie, inserer 0 \n Si le pouls doit etre trie, inserer 1\n");
    scanf("%d", &choix2);
    if (choix1 == 0)
    {
        if (choix2 == 0)
        {
            printf("Classement selon temps par ordre croissant");  //... 1 , selon le temps par ordre croissant
            tri_bulles_croissant_par_temps(tab,nb_lignes);         //Appel de la fonction réalisant la tâche souhaitée
            for (i=0; i<nb_lignes; i++)
            {
                printf("%l",tab[i].temps);
            }
        }
        else if (choix2 == 1)
        {
            printf("Classement selon pouls par ordre croissant");   //... 2 , selon le pouls par ordre croissant
            tri_bulles_croissant_par_pouls(tab,nb_lignes);          //Appel de la fonction réalisant la tâche souhaitée
            for (i=0; i<nb_lignes; i++)
            {
                printf("%d",tab[i].pouls);
            }

        }
        else
        {
            printf("Le choix2 n'est pas correct");
        }
    }

    else if (choix1 == 1)
    {
        if (choix2 == 0)
        {
            printf("Classement selon temps par ordre decroissant");     //... 1 , selon le temps par ordre décroissant
            tri_bulles_decroissant_par_temps(tab,nb_lignes);            //Appel de la fonction réalisant la tâche souhaitée
            for (i=0; i<nb_lignes; i++)
            {
                printf("%l",tab[i].temps);
            }
        }
        else if (choix2 == 1)
        {
            printf("Classement selon pouls par ordre decroissant");     //... 1 , selon le pouls par ordre décroissant
            tri_bulles_decroissant_par_pouls(tab,nb_lignes);            //Appel de la fonction réalisant la tâche souhaitée
            for (i=0; i<nb_lignes; i++)
            {
                printf("%d",tab[i].pouls);
            }
        }
        else                                        //Envoie un message d'erreur si le choix2 rentré n'est pas valide
        {
            printf("Le choix2 n'est pas correct");
        }
    }

    else                                            //Envoie un message d'erreur si le choix2 rentré n'est pas valide
    {
        printf("Le choix1 n'est pas correct");
    }


    affichage_tableau(tab, nb_lignes);
}

//--------------------------------------------------------------------------------------

//Cette fonction calcul le pouls moyen
int Moyenne_pouls(structure tab[], int nb_lignes)
{
    int somme = 0, i ;
    for (i=0; i < nb_lignes;i++)    //Nous calculons d'abord la somme de tous les pouls
    {
        somme += tab[i].pouls;
    }
    return (somme/nb_lignes);       //Nous divisons la somme par le nombre total afin d'obtenir la moyenne
}

//--------------------------------------------------------------------------------------

//Cette fonction affiche le nombre de ligne du tableau utilisées pour stocker des données
void Afficher_nbr_lignes_de_donnees(structure tab[],int nb_lignes)
{
    printf("Nous trouvons %d de donnees",nb_lignes);    //Nous avons déjà une fonction réalisant cette tâches dans donnee.c
}

//--------------------------------------------------------------------------------------

//Cette fonction tri la tableau afin de trouver le pouls minimum et maximum du tableau
void Max_et_Min_pouls(structure tab[], int nb_lignes)
{
    tri_bulles_croissant_par_pouls(tab , nb_lignes);    //Tri des composantes pouls du tableau
    printf("Le minimun est %d et le maximum est %d", tab[0].pouls, tab[nb_lignes].pouls);   //Affichage des pouls de premier et dernier rang

}

//--------------------------------------------------------------------------------------


