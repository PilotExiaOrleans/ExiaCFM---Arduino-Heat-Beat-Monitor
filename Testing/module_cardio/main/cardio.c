
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


long DeterminationPositionBattement(short state, long depart,long fin, long temps)
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



long DeterminationEcartenCours(long depart, long fin, long duree, long temps)
{
if (depart!=0)
    {
      fin = temps;
      return duree = fin - depart ;
    }
}
