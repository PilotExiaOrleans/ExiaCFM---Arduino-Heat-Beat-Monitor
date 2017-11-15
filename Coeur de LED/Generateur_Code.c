#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void Initialisation()
{
    FILE *f = NULL;
    system("md param.h");
    f=fopen("param.h/param.h.ino", "w");
    if (f!=NULL)
    {
    }
    else
    {
        printf("L'ouverture du fichier a %cchou%c", 130, 130);
        exit(EXIT_FAILURE);
    }
    fputs("void setup()", f);
    fputs("{\n  // Initialization . . .\n", f);
    fputs("pinMode(2, OUTPUT); // LED n°1 (pin 2)\npinMode(3, OUTPUT); // LED n°2 (pin 3)\npinMode(4, OUTPUT); // LED n°3 (pin 4)\npinMode(5, OUTPUT); // LED n°4 (pin 5)\npinMode(6, OUTPUT); // LED n°5 (pin 6)\npinMode(7, OUTPUT); // LED n°6 (pin 7)\npinMode(8, OUTPUT); // LED n°7 (pin 8)\npinMode(9, OUTPUT); // LED n°8 (pin 9)\npinMode(10, OUTPUT); // LED n°9 (pin 10)\npinMode(11, OUTPUT); // LED n°10 (pin 11)\n}\n\n", f);
    fputs("void loop() // Main loop function . . .\n{\n", f);
    fclose (f);
}

void Ouverture_Televersement()
{
    system("start param.h/param.h.ino");
    Sleep(7000);
    keybd_event(VK_CONTROL,0,0,0);                   //copyright: Bastien Le Gall
    keybd_event('U',0,0,0);                          //copyright: Bastien Le Gall
    keybd_event('U',0,KEYEVENTF_KEYUP,0);            //copyright: Bastien Le Gall
    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);     //copyright: Bastien Le Gall
}

void Toutes_les_LEDs_allumees()
{
    Initialisation();
    FILE *f;
    f=fopen("param.h/param.h.ino", "a");
    fputs("   int ecart_entre_deux_battements = 100;\n   int periode_un_battement = 300;\n", f);
    fputs("   for (int i=2;i<12;i+=1)\n   {\n      digitalWrite(i, HIGH);\n   }\n", f);
    fputs("   delay(periode_un_battement);\n   for (int i=2;i<12;i+=1)\n   {\n      digitalWrite(i, LOW);\n   }\n", f);
    fputs("   delay(ecart_entre_deux_battements);\n}", f);
    fclose(f);
    Ouverture_Televersement();
}

void Une_LED_sur_2_allumee()
{
    Initialisation();
    FILE *f;
    f=fopen("param.h/param.h.ino", "a");
    fputs("  int delais = 400;\nwhile(1)\n{\n  for (int i=2;i<12;i+=2)\n  {\n    digitalWrite(i, HIGH);\n    delay(delais);\n    digitalWrite(i, LOW);\n  }   \n}\n}", f);
    fclose(f);
    Ouverture_Televersement();
}

void Une_LED_sur_3_allumee()
{
    Initialisation();
    FILE *f;
    f=fopen("param.h/param.h.ino", "a");
    fputs("  int delais = 500;\n  int i;\n  \n  while( i<12)\n  {\n    digitalWrite(i, HIGH);\n    delay(delais);\n    digitalWrite(i, LOW); \n    if (i>8){i-=7;}\n    else{ i+=3;}\n  }\n}", f);
    fclose(f);
    Ouverture_Televersement();
}

void Une_LED_allumee_au_choix()
{
    Initialisation();
    FILE *f;
    f=fopen("param.h/param.h.ino", "a");
    fputs("  int delais = 400;\n  int i=4, j=i+1; //choisir quelle LED on veut allumer en\n                  //changeant la valeur de i, entre 1 et 10.\n  digitalWrite(j, HIGH);\n  delay(delais);\n  digitalWrite(j, LOW);\n  delay(100);\n}", f);
    fclose(f);
    Ouverture_Televersement();
}

void Chenille()
{
    Initialisation();
    FILE *f;
    f=fopen("param.h/param.h.ino", "a");
    fputs("  int delais = 400;\n\n  for (int i=2;i<12;i+=1)\n  {\n    digitalWrite(i, HIGH); \n    delay(delais);\n    digitalWrite(i, LOW);\n  }\n }   ", f);
    fclose(f);
    Ouverture_Televersement();
}

void Chargement()
{
    Initialisation();
    FILE *f;
    f=fopen("param.h/param.h.ino", "a");
    fputs("  int delais = 70;\n\n  for (int i=2 ; i<8 ; i++)\n  {\n    if (i==2 || i==7)\n    {\n      digitalWrite(i, HIGH);\n    }\n    else\n    {\n      digitalWrite(i, HIGH);\n      digitalWrite(14-i, HIGH);\n    }\n    delay(delais);\n  }\n  for (int i=7 ; i>1 ; i--)\n  {\n    if (i==2 || i==7)\n    {\n      digitalWrite(i, LOW);\n    }\n    else\n    {\n      digitalWrite(i, LOW);\n      digitalWrite(14-i, LOW);\n    }\n    delay(delais);\n  }\n}", f);
    fclose(f);
    Ouverture_Televersement();
}
