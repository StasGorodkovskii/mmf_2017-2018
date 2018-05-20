#include<iostream>
#include<fstream>


using namespace std;

int main()




{

	ofstream numbersWrite{ "numbers.txt", ios::out | ios::binary };
	int n;
	cout << "Enter 5 numbers: ";
	for (size_t i = 0; i < 5; i++)
	{
		cin >> n;
		numbersWrite.write(reinterpret_cast<const char*>(&n), sizeof(int));

	}
	numbersWrite.close();

	ifstream numbersRead{ "numbers.txt", ios::in | ios::binary };
	for (size_t i = 0; i < 5; i++)
	{
		numbersRead.read(reinterpret_cast<char*>(&n), sizeof(int));
		cout << " " << n;
	}

	
	cout << endl;
	system("pause");
	return 0;
}