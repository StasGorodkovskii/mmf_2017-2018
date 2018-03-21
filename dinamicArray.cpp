#include<iostream>
#include<cmath>



using namespace std;



double sinTaylor(double, double);
double** createMatrix(double(*)(double, double)//указатель на функцию sinTaylor//)  .....(возможно, нужно поставить указатель или даже два)
	double createElementForMatrix(double(*)(double,double)); // функция, создающая элементы матрицы
int main()
{
     int dimention;
     double eps;

	 cout << "Enter dimention:";
	 cin >> dimention;
	 cout << "Enter precition: ";
	 cin >> eps;



	 matrix = createMatrix(dimention, sinTaylor, eps) // функция, создающая матрицу, состоящую из sinTaylor; ( параметрами будут : eps,dimention, нужно задать функцию как параметр, т.е - указатель на функцию


		 for (size_t i = 0; i < dimention; ++i)
		 {
			 for (size_t j = 0; j < dimention; ++j)// так как матрица квадратная
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
	x = fmod(x, 2 * 3.14159265358979323846)// sin - переодическая функция с периодом 2п. Для больших значений может переполнится память
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