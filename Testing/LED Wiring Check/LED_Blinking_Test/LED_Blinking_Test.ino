// Simply testing if LEDs are correctly wired and 100% working.
// LEDs are connected from D2 to D11.

void setup() //Board Initialization function . . .
{
// Initialization . . .
pinMode(2, OUTPUT); // LED n°1 (pin 2)
pinMode(3, OUTPUT); // LED n°2 (pin 3)
pinMode(4, OUTPUT); // LED n°3 (pin 4)
pinMode(5, OUTPUT); // LED n°4 (pin 5)
pinMode(6, OUTPUT); // LED n°5 (pin 6)
pinMode(7, OUTPUT); // LED n°6 (pin 7)
pinMode(8, OUTPUT); // LED n°7 (pin 8)
pinMode(9, OUTPUT); // LED n°8 (pin 9)
pinMode(10, OUTPUT); // LED n°9 (pin 10)
pinMode(11, OUTPUT); // LED n°10 (pin 11)
}
void loop() // Main loop function . . .
{
// DEL x ON for 100ms, then off, allowing DEL x+1 to do the same etc... and then start over to LED 1.
digitalWrite(2, HIGH);
delay(100);
digitalWrite(2, LOW);
delay(100);
digitalWrite(3, HIGH);
delay(100);
digitalWrite(3, LOW);
delay(100);
digitalWrite(4, HIGH);
delay(100);
digitalWrite(4, LOW);
delay(100);
digitalWrite(5, HIGH);
delay(100);
digitalWrite(5, LOW);
delay(100);
digitalWrite(6, HIGH);
delay(100);
digitalWrite(6, LOW);
delay(100);
digitalWrite(7, HIGH);
delay(100);
digitalWrite(7, LOW);
delay(100);
digitalWrite(8, HIGH);
delay(100);
digitalWrite(8, LOW);
delay(100);
digitalWrite(9, HIGH);
delay(100);
digitalWrite(9, LOW);
delay(100);
digitalWrite(10, HIGH);
delay(100);
digitalWrite(10, LOW);
delay(100);
digitalWrite(11, HIGH);
delay(100);
digitalWrite(11,  LOW);
delay(100);
}
