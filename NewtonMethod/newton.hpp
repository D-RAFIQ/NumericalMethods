#ifndef NEWTON_H
#define NEWTON_H
#include <iostream>
#include <cmath>

using namespace std;

typedef double (*pfn) (double);

double newton(double xp, pfn f, pfn fd, double delta, double epsilon, int n_max);
#endif