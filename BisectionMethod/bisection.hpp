#ifndef BISECTION_H
#define BISECTION_H
#include <iostream>
#include <cmath>

using namespace std;

double bisection(double a, double b, double (*f) (double) , double delta, double epsilon);


#endif
