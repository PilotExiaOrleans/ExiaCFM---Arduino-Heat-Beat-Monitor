#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnee.h"
#include "actions.h"

int main()
{
    int n = 5000;
    structure tableau_donnees[n];       //Declaration d'un tableau de 10000 lignes de type structure defini dans donnee.h
    RemplirTableau(tableau_donnees,n);
    menu(tableau_donnees,n);            //Appel du menu
}
