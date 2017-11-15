
short ComplementationValeurIntermediaire(short valeur)
{
  if (valeur == 1)
    {
      return valeur = 0;
    }
    else
    {
      return valeur = 1;
    }
}


int DeterminationPositionBattement(short state, int depart,int fin, int temps)
{
  if (state == 1)
    {
      depart = temps;
      return depart;
    }
  else
    {
      fin = temps;
      return fin;
    }
}



int DeterminationEcartenCours(int depart, int fin, int duree, int temps)
{
if (depart!=0)
    {
      fin = temps;
      return duree = fin - depart ;
    }
}
