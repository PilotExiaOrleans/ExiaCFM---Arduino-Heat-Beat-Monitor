#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
    printf("D%cbut de l'ouverture d'Arduino et T%cl%cversement\n",130, 130, 130);
    Ouverture_Televersement();
    return 0;
}

void Ouverture_Televersement()
{
    system("start C:/Projets/Projet-Fondamentaux-Scientifiques/Livrables/Modules/M2_Coeur_LEDs/coeur/coeur.ino");    //Lance le programme Arduino
    Sleep(7000);                            //Pause de 7s pour laisser le temps au PC de lancer le programme Arduino
    keybd_event(VK_CONTROL,0,0,0);                   //copyright: Bastien Le Gall
    keybd_event('U',0,0,0);                          //copyright: Bastien Le Gall       //permet de faire ctrl+u, donc de téléverser automatiquement dans notre cas.
    keybd_event('U',0,KEYEVENTF_KEYUP,0);            //copyright: Bastien Le Gall
    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);     //copyright: Bastien Le Gall
}
