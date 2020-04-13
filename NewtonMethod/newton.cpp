#include <iostream>
#include <cmath>

using namespace std;

typedef double (*pfn) (double);

double newton(double xp, pfn f, pfn fd, double delta, double epsilon, int n_max)
{
  double xn;
  if (f(xp)==0.0) return xp;
  if (fd(xp)!=0.0) // Permet d'éviter la division par zéro 
    for (int i = 1; i <= n_max; i++)
    {
      if (abs(fd(xp)) < epsilon) exit(0);
      else
      {xn = xp - (f(xp) / fd(xp));
        if ( (abs(fd(xp))<epsilon) || (abs(xn-xp)<delta))
          return xn;
        else xp = xn;
      }
    }
  else exit(0);
  exit(0);
}