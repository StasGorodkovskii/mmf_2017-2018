#include<iostream>
#include<cmath>



using namespace std;



double sinTaylor(double, double);
double** createMatrix(double(*)(double, double)//óêàçàòåëü íà ôóíêöèþ sinTaylor//)  .....(âîçìîæíî, íóæíî ïîñòàâèòü óêàçàòåëü èëè äàæå äâà)
	double createElementForMatrix(double(*)(double,double)); // ôóíêöèÿ, ñîçäàþùàÿ ýëåìåíòû ìàòðèöû
int main()
{
     int dimention;
     double eps;

	 cout << "Enter dimention:";
	 cin >> dimention;
	 cout << "Enter precition: ";
	 cin >> eps;



	 matrix = createMatrix(dimention, sinTaylor, eps) // ôóíêöèÿ, ñîçäàþùàÿ ìàòðèöó, ñîñòîÿùóþ èç sinTaylor; ( ïàðàìåòðàìè áóäóò : eps,dimention, íóæíî çàäàòü ôóíêöèþ êàê ïàðàìåòð, ò.å - óêàçàòåëü íà ôóíêöèþ


		 for (size_t i = 0; i < dimention; ++i)
		 {
			 for (size_t j = 0; j < dimention; ++j)// òàê êàê ìàòðèöà êâàäðàòíàÿ
			 {
				 cout  << matrix[i][j];

			 }
			 cout << endl;
		 }


}



double sinTaylor(double x, double eps)
{

	double prev, next, summ;
	size_t k = 0;
	summ = prev = x;
	next = prev * (-1)*pow(x, 2) / ((2 * k + 2)*(2 * k + 3));
	while (abs(next) >= eps)
	{
		summ += next;
		prev = next;
		k++;
		next = prev * (-1)*pow(x, 2) / ((2 * k + 2)*(2 * k + 3));
	}
	return summ;



}
