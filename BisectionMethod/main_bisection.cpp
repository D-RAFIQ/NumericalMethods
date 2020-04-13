#include <iostream>
#include <cmath>

using namespace std;

#include "bisection.hpp"


double f(double x){return (1/x) - pow(2,x);};

double g(double x){return pow(2,(-x)) + exp(x) + 2 * cos(x) - 6;};

int main ()
{
cout << "----------------------"<< "\n";
cout << "La fonction f s'annule en: " 
<< bisection(0, 1, *f, 0.000000001, 0.000000001) << "\n";


cout << "----------------------"<< "\n";
cout << "La fonction g s'annule en: " 
<< bisection(1, 3, g, 0.000000001, 0.000000001) << "\n";
}
