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

void setParam(int *choix)
{
    FILE *f = NULL;
    f=fopen("param.h", "w");
    if (f!=NULL)
    {
        sprintf(choice, "#define LEDPARAM %d", *choix);
    }
    else
    {
        printf("L'ouverture du fichier a %cchou%c", 130, 130); // On n'oublie pas les caracteres speciaux, question esthetique
        exit(EXIT_FAILURE);
    }
   
}