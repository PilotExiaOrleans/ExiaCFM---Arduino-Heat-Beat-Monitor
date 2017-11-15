#include <stdio.h>
#include <stdlib.h>

void Toutes_les_LEDs_allumees()
{
    FILE *f = NULL;
    f=fopen("param.h/param.h.ino", "a");
    printf("test");
    if (f!=NULL)
    {
    }
    else
    {
        printf("L'ouverture du fichier a echoue");
        exit(EXIT_FAILURE);
    }
    fputs("void setup()", f);
    fputs("{\n// Initialization . . .\n", f);
    fputs("pinMode(2, OUTPUT); // LED n°1 (pin 2)\pinMode(3, OUTPUT); // LED n°2 (pin 3)\npinMode(4, OUTPUT); // LED n°3 (pin 4)\npinMode(5, OUTPUT); // LED n°4 (pin 5)\npinMode(6, OUTPUT); // LED n°5 (pin 6)\npinMode(7, OUTPUT); // LED n°6 (pin 7)\npinMode(8, OUTPUT); // LED n°7 (pin 8)\npinMode(9, OUTPUT); // LED n°8 (pin 9)\npinMode(10, OUTPUT); // LED n°9 (pin 10)\npinMode(11, OUTPUT); // LED n°10 (pin 11)}", f);
    fputs("", f);
    fputs("", f);
    fputs("", f);
    fputs("", f);
    fputs("", f);
    fputs("", f);
    fputs("", f);
    fputs("", f);
    fclose(f);
}

/*void Une_LED_sur_2_allumee()
void Une_LED_sur_3_allumee()
void Une_LED_allumee_au_choix()
void Chenille()
void Chargement()*/
