
int Simulation(long temps_precedent, short state, int valeur)
{
  
  if (state == 1)
  {
    return valeur = 200;
  }
  else
  {
    return valeur = 700;
  }
  if (temps_precedent >= 5000)
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
  
}
