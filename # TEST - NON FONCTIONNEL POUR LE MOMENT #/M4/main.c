#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnee.h"
#include "actions.h"

int main()
{
    int n = 10000;
    structure tableau_donnees[n];       //Declaration d'un tableau de 10000 lignes de type structure défini dans donnee.h
    RemplirTableau(tableau_donnees,n);  //La tableau defini precedemment est rempli avec les valeurs du fichier .csv
    menu(tableau_donnees,n);            //Appel du menu
}
