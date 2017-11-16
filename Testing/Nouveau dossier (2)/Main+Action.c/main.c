#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int choix;
    //printf("Coucou mes petits bichons, alors aujourd'hui on se retrouve pour un unboxing de mascara!!!\n");
    //menu(choix);
    int SIZE = 10;
    int tableau[SIZE];
    int i;
    int valeur_recherchee;

    tableau[0] = 5 ;
    tableau[1] = 2 ;
    tableau[2] = 8 ;
    tableau[3] = 14 ;
    tableau[4] = 41 ;
    tableau[5] = 55 ;
    tableau[6] = 100 ;
    tableau[7] = 30 ;
    tableau[8] = 20 ;
    tableau[9] = 10 ;

    tri_bulles(tableau, SIZE);

    for (i = 0; i<= SIZE-1; i++)
    {
        printf("%d\n", tableau[i]);
    }


    valeur_recherchee = rechercheDichotomique(tableau, SIZE, 41);

    printf("%d", valeur_recherchee);
return 0;

}
