#include "generationCode.h"

void setParam(int *choix)
{
    FILE *f = NULL;
    f=fopen("param.h", "w");
    if (f!=NULL)
    {
        sprintf(choice, "#DEFINE LEDPARAM %d", *choix);
    }
    else
    {
        printf("L'ouverture du fichier a %cchou%c", 130, 130); // On n'oublie pas les caracteres speciaux
        exit(EXIT_FAILURE);
    }
   
}