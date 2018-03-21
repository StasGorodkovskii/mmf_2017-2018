#include <iostream>
#include <locale>

using namespace std;

long long remove_digit(long long, size_t);

int main()
{
	setlocale(LC_ALL, "rus");
	long long n = 0;
	size_t remove = 0;

	cout << "Введите число: ";
	cin >> n;

	cout << "Какую цифру следует удалить: ";
	cin >> remove;

	cout
		<< "Число после удаления цифры "
		<< remove
		<< ": "
		<< remove_digit(n, remove)
		<< endl;



	cout << endl << "......................" << endl;
	system("pause");
	return 0;
}

long long remove_digit(long long num, size_t toRemove)
{
	long long tmp = num;
	size_t k = 0;

	while (num)
	{
		++k;
		num /= 10;
	}

	//cout << k << endl;

	for (size_t i = 0; i < k; i++)
	{
		if (tmp % 10 == toRemove)
			i--;
		else
			num += pow(10, i)*(tmp % 10);
		tmp /= 10;
	}

	return num;
}