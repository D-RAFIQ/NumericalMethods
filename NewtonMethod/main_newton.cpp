#include <iostream>
#include <cmath>

using namespace std;

#include "newton.hpp"


typedef double (*pfn) (double);

double f(double x){return x*x*x - 5*x*x + 3*x + 7;};
double fd(double x){return 3*x*x - 10*x + 3;};

int main ()
{
	cout << "La fonction s'annule en : " << newton(5,f,fd,0.00001,0.00001,100000)<<endl;
	return 0;
}