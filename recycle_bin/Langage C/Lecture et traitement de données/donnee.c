#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 5010 //Taille du tableau � 5010


void donnee()
{
    FILE* fichier = NULL;
    char tab[TAILLE_MAX] = "";
    int i=0, pls;
    float tps;
    typedef struct Tableau Tableau;
    struct Tableau
    {
        float temps;
        int pouls;
    };


    Tableau tableau[TAILLE_MAX];
    fichier = fopen("jeu_de_donnees_test.csv", "r");

    if (fichier != NULL)
    {
    while(fgets(tab, TAILLE_MAX, fichier) != NULL)//On lit le max TAILLE_MAX caract�res du fichier. On stock le tout dans "chaine".
    {
        //("%s", tab); //test du tableau
        sscanf(tab, "%f;%d", tps, pls);
        tableau[i].temps=tps;
        tableau[i].pouls=pls;
        i++;
    }
    for (i=0 ; i<TAILLE_MAX ; i++);
    {
        printf("Temps: %f, Pouls: %d\n", tableau[i].temps, tableau[i].pouls);
    }
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur en cas d'�chec
        printf("Impossible d'ouvrir le fichier jeu_de_donnees_test.csv");
    }
}
