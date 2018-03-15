#include <iostream> 
#include <cmath>




using namespace std;

double taylorSin(int, int, double);
double sin(int, int);


int main()
{
	const int n = 5;
	double taylorSinArray[n][n], librarySinArray[n][n], eps = 0.00000000000000000001;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				taylorSinArray[i][j] = 1;
			else
				taylorSinArray[i][j] = taylorSin(i, j, eps);

		}
	
	cout <<"Array with Taylor sin : \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j<n; j++)
		{
			cout << taylorSinArray[i][j] << " ";
			
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				librarySinArray[i][j] = 1;
			else
				librarySinArray[i][j] = sin(i, j);

		}

	cout<<"\nArray with library sin : \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << librarySinArray[i][j] << " ";
			
		}
	system("pause");
}
double taylorSin(int i, int j, double eps)
{
	double taylor_sinx, x = i + j, sinx, y = i - j, siny, taylor_siny;
	taylor_sinx = x;
	sinx = x;
	siny = y;
	taylor_siny = y;
	for (int k = 1; abs(taylor_sinx) >= eps; k++)
	{
		taylor_sinx *= -x*x / (2 * k*(2 * k + 1));
		sinx += taylor_sinx;
	}

	for (int k = 1; abs(taylor_siny) >= eps; k++)
	{
		taylor_siny *= -x*x / (2 * k*(2 * k + 1));
		siny += taylor_siny;
	}

	return (sinx - siny) / ((x + 1)*(x + 1));
}
double sin(int i, int j)
{
	double comp;
	comp = (sin(i + j) - sin(i - j)) / (i + j + 1) / (i + j + 1);
	return comp;
}
