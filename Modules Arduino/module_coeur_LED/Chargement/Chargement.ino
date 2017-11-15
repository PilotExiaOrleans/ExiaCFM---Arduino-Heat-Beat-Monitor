

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
  int delais = 70;

  for (int i=2 ; i<8 ; i++)
  {
    if (i==2 || i==7)
    {
      digitalWrite(i, HIGH);
    }
    else
    {
      digitalWrite(i, HIGH);
      digitalWrite(14-i, HIGH);
    }
    delay(delais);
  }
  for (int i=7 ; i>1 ; i--)
  {
    if (i==2 || i==7)
    {
      digitalWrite(i, LOW);
    }
    else
    {
      digitalWrite(i, LOW);
      digitalWrite(14-i, LOW);
    }
    delay(delais);
  }
}
