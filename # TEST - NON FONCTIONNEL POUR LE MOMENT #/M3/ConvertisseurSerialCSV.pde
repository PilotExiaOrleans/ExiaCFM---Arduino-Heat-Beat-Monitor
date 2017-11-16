// From Arduino to Processing to Txt or csv etc.


// Import Librairies
import processing.serial.*;

// Declaration Variables
PrintWriter output;
Serial udSerial;

void setup() 
{
  // INIT liaison serie, ici port A0 a 9600 bauds
  udSerial = new Serial(this, Serial.list()[0], 9600);
  // Creation fichier sortie Battements.csv
  output = createWriter ("Battements.csv");
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