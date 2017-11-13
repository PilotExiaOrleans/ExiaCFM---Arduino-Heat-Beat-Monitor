// Simplement pour tester si les LEDs sont bien branchées.
// Les LEDs sont branchées du port D4 au port D13.

void setup() //fonction d'initialisation de la carte
{
//contenu de l'initialisation
pinMode(13, OUTPUT); 
pinMode(12, OUTPUT); 
pinMode(11, OUTPUT); 
pinMode(10, OUTPUT); 
pinMode(9, OUTPUT); 
pinMode(8, OUTPUT); 
pinMode(7, OUTPUT); 
pinMode(6, OUTPUT); 
pinMode(5, OUTPUT); 
pinMode(4, OUTPUT); 
}
void loop() //fonction principale, elle se répète (s’exécute) à l'infini
{
digitalWrite(13, HIGH);
delay(100);
digitalWrite(13, LOW);
delay(100);
digitalWrite(12, HIGH);
delay(100);
digitalWrite(12, LOW);
delay(100);
digitalWrite(11, HIGH);
delay(100);
digitalWrite(11, LOW);
delay(100);
digitalWrite(10, HIGH);
delay(100);
digitalWrite(10, LOW);
delay(100);
digitalWrite(9, HIGH);
delay(100);
digitalWrite(9, LOW);
delay(100);
digitalWrite(8, HIGH);
delay(100);
digitalWrite(8, LOW);
delay(100);
digitalWrite(7, HIGH);
delay(100);
digitalWrite(7, LOW);
delay(100);
digitalWrite(6, HIGH);
delay(100);
digitalWrite(6, LOW);
delay(100);
digitalWrite(5, HIGH);
delay(100);
digitalWrite(5, LOW);
delay(100);
digitalWrite(4, HIGH);
delay(100);
digitalWrite(4, LOW);
delay(100);
}
