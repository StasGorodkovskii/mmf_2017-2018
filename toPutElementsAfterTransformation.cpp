#include<iostream>



using namespace std;



int main()


{

	int* array = { 0 }, *newArray = { 0 };
	int dimentionOfArray = { 0 }, dimentionOfNewArray = { 0 };


	cout << "Enter size of the array: ";
	cin >> dimentionOfArray;
	array = new int[dimentionOfArray];
	newArray = new int[dimentionOfArray];

	

	cout << "Enter elements of array: " << " ";
	for (size_t i = 0; i < dimentionOfArray; i++)
	{
		cin >> array[i];
	}

	for (size_t i = 1; i < dimentionOfArray; i = i +2)
	{
		if (array[i] % 2 == 0)
		{
			newArray[dimentionOfNewArray] = array[i];
			dimentionOfNewArray++;
		}
	}
	for (size_t i = 1; i < dimentionOfArray; i = i + 2)
	{
		if (array[i] % 2 == 0)
			for (size_t j = i; j < dimentionOfArray - 1; j++)
			{
				array[j] = array[j + 1]; i = i - 1;
			}
	}

	for (size_t i = 1; i < dimentionOfNewArray; i++)
	{
		cout << newArray[i] << " ";
	}
	
	for (size_t i = 0; i < (dimentionOfArray - dimentionOfNewArray); ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}