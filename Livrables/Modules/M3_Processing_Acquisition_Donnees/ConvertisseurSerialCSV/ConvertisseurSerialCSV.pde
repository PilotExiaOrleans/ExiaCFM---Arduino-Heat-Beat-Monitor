/*
==================================================================================================
ConvertisseurSerialCSV.pde - Lit et ecrit la valeur du pouls issue depuis la carte Arduino.
==================================================================================================
Last Verification : 17/11/2017
Comments by : Joel DIDIER
Exia CESI A1 - Orleans
==================================================================================================
*/

// From Arduino to Processing to Txt or csv etc.


// Import Librairies
import processing.serial.*;

// Declaration Variables
PrintWriter output;
Serial udSerial;

void setup() 
{
  // INIT liaison serie, a 9600 bauds
  udSerial = new Serial(this, Serial.list()[0], 9600);
  // Creation fichier sortie Battements.csv
  output = createWriter ("C:/Projets/Projet-Fondamentaux-Scientifiques/Livrables/Modules/M4_Lecture_Traitement_Donnees/Battements.csv");
}
  // Ecriture donnees + Affichage
  void draw() 
  {
    if (udSerial.available() > 0) 
	{
      String SenVal = udSerial.readString();
      if (SenVal != null) 
	  {
        output.println(SenVal);
      }
    }
  }

  // Appui touche . . .
  void keyPressed()
  {
    // Vidage . . .
    output.flush();

    // Fermeture . . .
    output.close();
    exit(); 
  }