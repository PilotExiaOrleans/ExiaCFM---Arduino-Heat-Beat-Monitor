
int Simulation(long temps_precedent, short state)
{
  if (millis() - temps_precedent >= 5000)
  {
    if (state ==1)
    {
      state = 0;
      temps_precedent = millis();
    }
    else
    {
      state = 1;
      temps_precedent = millis();
    }
  }
  if (state == 1)
  {
    return 0;
  }
  else
  {
    return 1000;
  }
  
  
}
