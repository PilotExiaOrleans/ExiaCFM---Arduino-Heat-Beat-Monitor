#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
#include "actions.h"

void RemplirTableau (structure tab[], int n)
{

   char buffer[2048];
   char *rec;
   char *ligne;
   int i=0;
   int x;


   FILE *fstream = fopen("jeu_de_donnees_test.csv","r");
   if(fstream == NULL)
   {
      printf("Erreur - Impossible d'ouvrir le fichier en lecture.\n");
   }

   while((ligne=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
     rec = strtok(ligne,";");

     while(rec != NULL)
     {  x=atoi(rec);
        rec = strtok(NULL,";");
        tab[i].pouls = atoi(rec);
        rec = strtok(NULL,";");
     }
     ++i ;
    n=n+1;


   }

    fclose(fstream);
    fstream = fopen("jeu_de_donnees_test.csv","r");
    i=0; // Remise a 0 du compteur

   while((ligne=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
     rec = strtok(ligne,";");
     while(rec != NULL)
     {
        tab[i].temps = atoi(rec) ;
        rec = strtok(NULL,";");
        x=atoi(rec);
        rec = strtok(NULL,";");
     }
     i++;


   }

}

