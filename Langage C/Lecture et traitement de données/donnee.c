#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 5010 //Taille du tableau à 5010

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
//    int caractereActuel = 0;
    char tab[TAILLE_MAX] = "";
    int i;


    fichier = fopen("jeu_de_donnees_test.csv", "r");

    if (fichier != NULL)
    {
/*        // On peut lire
        do
        {
        printf("%c", caractereActuel = fgetc(fichier)); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
*/
    while(fgets(tab, TAILLE_MAX, fichier) != NULL)//On lit le max TAILLE_MAX caractères du fichier. On stock le tout dans "chaine".
    {
        fgets(tab, TAILLE_MAX, fichier);

            printf("%s", tab);
    }

        fclose(fichier);
}
    else
    {
        // On affiche un message d'erreur en cas d'échec
        printf("Impossible d'ouvrir le fichier jeu_de_donnees_test.csv");
    }

    return 0;
}
