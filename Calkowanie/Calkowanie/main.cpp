#include <iostream>

using namespace std;

double function(double x)
{
	return x*x + 3;
}


int main()
{
	double start=2;
	double finish = 5;
	int tmp = finish - start;
	int n = 1000000000;
	double dx = (finish - start) / n;
	double x = start;
	double result = 0;
	for (int i = 0; i < n; i++)
	{
		result += (function(x) + function(x+dx)) / 2;
		x += dx;
	}
	result *= dx;

	cout << result << endl;

	system("pause");
}