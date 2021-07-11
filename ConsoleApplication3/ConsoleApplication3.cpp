
#include <iostream>
#include <stdlib.h>
#include <math.h>
double** getData(int n)
{
	double** f;
	f = new double* [2];
	f[0] = new double [n];
	f[1] = new double [n];
	for (int i = 0; i < n; i++)
	{
		f[0][i] = (double)i;
		f[1][i] = -pow(((double)i*(double)i),1./3)-pow((1-((double)i*(double)i)),1./3);
	}
	return f;
}
void getApprox(double** x, double* a, double* b, int n)
{
	double sumx = 0;
	double sumy = 0;
	double sumx2 = 0;
	double sumxy = 0;
	for (int i = 0; i < n; i++)
	{
	sumx += 0;
    sumy += 0;
    sumx2 += 0;
	sumxy += 0;

	}
}