#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 5000 //Taille du tableau � 5010
#include "donnee.h"

void RemplirTableau(structure tableau[], int nb)
{
    FILE* fichier = NULL; // initialisation du fichier
    char chaine[nb]; //initialisation du tableau permettant la lecture du fichier
    int i=0, pls; // i=compteur de boucle       pls= pouls
    float tps; //tps=temps

    fichier = fopen("jeu_de_donnees_test.csv", "r"); // ouverture du fichier en lecture seule

    if (fichier != NULL) // verification de l'ouverture du fichier
    {
        while (fgets(chaine, nb, fichier) != NULL) //lire le fichier ligne par ligne tant qu'on est pas a la fin
        {
            //printf("%s", tab); // test pour voir si le tableau "tab" fonctionne

            //on stock le poul et le temps dans des variables tampons
            sscanf(chaine, "%f;%d", &tps, &pls); //lecture de la ligne du fichier (c'est ca qui marche pas)
            //printf("%f %d\n", tps, pls);
            //puis on le stock dans le tableau de structures

                tableau[i].pouls = pls;
                tableau[i].temps = tps;

            //printf("Temps: %f, Pouls: %d\n", tableau[i].temps, tableau[i].pouls); //affichage des donnees
            i++; //incrementation de i*/
            if(i>5000)break;
        }
    }
    else
    {
        // On affiche un message d'erreur en cas d'�chec
        printf("Impossible d'ouvrir le fichier jeu_de_donnees_test.csv");
    }
    fclose(fichier);
}