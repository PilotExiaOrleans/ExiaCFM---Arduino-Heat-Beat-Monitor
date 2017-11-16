
void setup() 
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
  int delais = 500;
  int i;
  
  while( i<12)
  {
    digitalWrite(i, HIGH);
    delay(delais);
    digitalWrite(i, LOW); 
    if (i>8){i-=7;}
    else{ i+=3;}
  }
}

