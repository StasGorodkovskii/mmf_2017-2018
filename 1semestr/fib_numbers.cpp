
#include <iostream>
#include <locale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int f1, f2;
	int c;

	do
	{
		cout << "Введите 1-ое число последовательности: ";
		cin >> f1;

		cout << "Введите 2-ое число последовательности: ";
		cin >> f2;

		cout << "Последовательность Фибоначчи: ";
		cout << f1 << " " << f2 << " ";
		while (f1 + f2 < 100)
		{
		

			f2 += f1; 
			f1 = f2 - f1; 
			cout
				<< f2
				<< " "; 
		}

		cout
			<< endl
			<< "Наименьшее (первое) 3-х значное число Фибоначчи этой последовательности: "
			<< f1 + f2 << endl
			<< ".............................."
			<< endl;

		cout
			<< "1. Повторить" << endl
			<< "2. Выход" << endl;

		cout << "Ваш выбор: ";
		cin >> c;
		if (c == 1)
			cout
			<< ".............................."
			<< endl;
	} while (c != 2);

	
	cout << endl << "................." << endl;
	return 0;
}