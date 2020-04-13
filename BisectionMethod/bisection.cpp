#include <iostream>
#include <cmath>

using namespace std;


double bisection(double a, double b, double (*f) (double) , double delta, double epsilon)
{
  double c = (a+b)/ 2;
  while (((abs(b-a)) > delta) && ((abs(f(c))) > epsilon)
)
  {
    if (f(a)*f(c) < 0) 
    	return bisection (a, c, f, delta, epsilon);
    else 
    	return bisection(c, b, f, delta, epsilon);
  }
  return c;
}