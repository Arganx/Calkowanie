#include <iostream>
#include <time.h>

using namespace std;

double function(double x)
{
	return x*x + 3;
}

double fRand(double fMin, double fMax)
{
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}

int main()
{
	srand(time(NULL));
	double start = 2;
	double finish = 5;
	double precision = 10000000;
	double max = 50;
	double min = 0;
	double x, y,tmp;
	double result = 0;
	double P = (max - min)*(finish - start);
	for (int i = 0; i <= precision; i++)
	{
		x = fRand(start, finish);
		y = fRand(min, max);
		tmp = function(x);
		if (y > 0 && y <= tmp)
		{
			result++;
		}
		else if(y<0 && y >=tmp)
		{
			result--;
		}
	}
	cout << (result / precision)*P << endl;

	system("pause");
}