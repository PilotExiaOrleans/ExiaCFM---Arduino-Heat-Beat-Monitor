#include "cardio.h"

long CalculPoul(long tempspoul, long tempsIntermediaire)
{
  return (1000.0 * 60.0) / (tempspoul - tempsIntermediaire); //Dans ce calcul, on converti la difference du temps lors de la detection d'un poul
}                                                            //et du temps de detection d'un precedent poul
