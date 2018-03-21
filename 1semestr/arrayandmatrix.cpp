#include<iostream>
#include<random>
#include<iomanip>
#include"header.h"


using namespace std;




int main()
{

	int arr[N]{}, positive{ -1 }, negative{-1};
	initArray(arr, N);
	printArray(arr, N);
	for (size_t i = 0; i < N; i++)
	{
		if (positive < 0 && arr[i] > 0)
			positive = i;
		if (arr[i] < 0)
			negative = i;
	}
	//cout << arr[positive] << endl;
	//cout << arr[negative] << endl;

	int summ{};
	bool Range{ true }, Summ{ false };

	if (negative - positive > 1)
	{
		for (size_t i = positive ; i < negative; i++)
		{
			if (i % 2 == 0 && arr[i] > 0 && arr[i] % 2 == 1)
			{
				Summ = true;
				summ += arr[i];
			}
		}
	}
	else
		Range = false;
	if (positive == -1 && negative == -1)
		cout << "There is no first positive and last negative numbers in array" << endl;
	else if (positive == -1)
		cout
		<< "There is no positive numbers in array" << endl
		<< "Last negative number is: " << arr[negative] << endl;
	else if (negative == -1)
		cout
		<< "There is no negative numbers in array" << endl
		<< "First positive number is: " << arr[positive] << endl;
	else
		cout
		<< "First positive number: " << arr[positive] << endl
		<< "Last negative number is: " << arr[negative] << endl;
	
	if (!Range)
		cout << "The range is incorrect" << endl;
	else if (Summ)
		cout << "The summ is: " << summ << endl;
	else if (!Summ)
		cout << "There is no elements to summ" << endl;


	
	system("pause");
	return 0;

}

