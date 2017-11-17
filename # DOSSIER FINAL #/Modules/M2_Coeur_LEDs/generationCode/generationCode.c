/*
==================================================================================================
generationCode.c - Ecrit le choix de l'utilisateur dans param.h.
La ligne "#define LEDPARAM %d" definit la variable LEDPARAM comme etant la valeur rentree par
l'utilisateur. On lira LEDPARAM.
==================================================================================================
Last Verification : 17/11/2017
Authors : Joel DIDIER, Louis MARJOLET
Exia CESI A1 - Orleans
==================================================================================================
*/


#include "generationCode.h"
#include "menu.h"
void setParam(int *choix)
{
    FILE *f; // Definit le fichier de sortie comme etant f
    choix[10];
    f=fopen("param.h", "w"); // Ouverture ou creation du fichier param.h en ecriture
    // Verification de l'ouverture du fichier, action en consequence
    if (f!=NULL)
    {
        fprintf(f, "#define LEDPARAM %d", *choix); // Ecriture de la declaration de la variable LEDPARAM (choix de l'user) dans le fichier param.h
    }
    else // Si le fichier n'a pas pu etre ouvert
    {
        printf("L'ouverture du fichier a %cchou%c", 130, 130); // On n'oublie pas les caracteres speciaux, question esthetique
        system("PAUSE");
        exit(EXIT_FAILURE);
    }
    fclose(f); // Fermeture du fichier

}
