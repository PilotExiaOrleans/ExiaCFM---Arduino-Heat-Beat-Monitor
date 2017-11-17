# ExiaCFM---Arduino-Heat-Beat-Monitor
## Projet - Cardiofréquencemètre - Arduino - C - Exia CESI - A1 - 2017
### Projet réalisé dans le cadre du projet mi-semestriel A1 2017. Utilise le langage C et le langage C Arduino.



# Pré-requis

Pour exploiter au mieux ce projet, il est nécessaire de posséder :
- un compilateur (GCC) associé, éventuellement, à un IDE (Code:Blocks, Visual Studio, ...)
- le logiciel Arduino
- une carte Arduino (une Arduino Uno a été utilisée dans ce projet)
- le logiciel Processing
- de la patience


# Utilisation du projet

## Étape 1 - Lancement du cardiofréquencemètre (Module 1)

1) Ouvrez le fichier main.ino situé dans Livrables\Modules\M1_Cardio\main
2) Branchez la carte Arduino
3) Sélectionnez le port dans le logiciel
4) Téléversez le programme dans la carte Arduino
5) Vérifiez les mesures dans la console


## Étape 2 - Lancement du Coeur de LEDs (Module 2)

### Étape 2.1 - Choix du type d'affichage des LEDs

**OPTION 1 (Méthode simple) :** Exécutez le fichier generationCode.exe situé dans 
```
Livrables\Modules\M2_Coeur_LEDs\generationCode\bin
```

**OPTION 2 (Ligne de commande) :** Exécutez les commandes suivantes (vérifiez que gcc a été déclaré dans path si nécessaire) :
```
gcc -Wall -c main.c menu.c generationCode.c
```
. . . puis :
```
gcc -Wall -o main.o menu.o generationCode.o
```
**OPTION 3 (IDE) :** Ouvrez le fichier generationCode.cbp situé dans 
```
Livrables\Modules\M2_Coeur_LEDs\generationCode
```

puis compilez.

### Étape 2.2 - Lancement de l'affichage des LEDs
(Soon.)


## Étape 3 - Lancement de l'acquisition des données avec Processing (Module 3)
1) Branchez la carte Arduino
2) Branchez le capteur sur le port A0 de la carte Arduino
3) Ouvrez le fichier ConvertisseurSerialCSV.pde avec Processing, situé dans 
```
Livrables\Modules\M3_Processing_Acquisition_Donnees
```
4) Lancez le programme.
5) Un fichier "Battements.csv" sera créé dans le même dossier que le programme.


## Étape 4 - Lancement du tri des données (Module 4)
1) Copiez le fichier csv généré (nommez-le jeu_de_donnees_test.csv) dans le même dossier que l'exécutable "Lecture et traitement de données.exe"
(L'exécutable est situé dans le dossier suivant : 
```
Livrables\Modules\M4_Lecture_Traitement_Donnees\bin\Debug)
```
2) Lancez le programme


# A propos . . .

### Conçu avec :

* [Code::Blocks 16.01](http://www.codeblocks.org/downloads) - IDE pour les programmes en C
* [Arduino 1.8.5](https://www.arduino.cc/en/Main/Software) - IDE pour les programmes en C Arduino
* [Processing 3.3.6](https://processing.org/download/) - Used to generate RSS Feeds
* [gcc version 6.3.0 (MinGW.org GCC-6.3.0-1)](https://gcc.gnu.org/) - Compilateur C

### Auteurs

* **Joël Didier** - *Chef de projet* - [Studisys](https://github.com/Studisys)
* **Vicente Vaz** - [Trapadore](https://github.com/Trapadore)
* **Louis Marjolet** - [LoLouis10](https://github.com/LoLouis10)
* **Philippe Burlet** - [PhilippeBurlet](https://github.com/PhilippeBurlet)


### Licence

Licence MIT - voir le fichier [LICENSE.md](https://github.com/Studisys/ExiaCFM---Arduino-Heat-Beat-Monitor/blob/master/README.md) pour plus de détails.