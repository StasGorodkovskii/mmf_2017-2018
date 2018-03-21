#include<iostream>
#include<locale>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	long long n, n1=0, copy_n;
	unsigned int k = 0;
	cout << "Введите число: ";
	cin >> n;
	copy_n = n;
	while (copy_n)
	{
		
		++k;
		copy_n /= 10;

	}
	//cout << k << endl;
	copy_n = n;
	unsigned int last_numeral;
	for (int i = k-1; i >= 0; i--)

	{
		last_numeral = copy_n % 10;
		n1 += last_numeral*pow(10, i);
		copy_n /= 10;
	}
	if (n == n1)
		cout << "Число симметрично" << endl;
	else
		cout << "Число не симметрично" << endl;
	system("pause");
	return 0;

}
