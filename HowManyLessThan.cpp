#include<iostream>
using namespace std;

const size_t SIZE = 9;
void bubbleSort(int*, size_t);
void initArray(int*, size_t);
void printArray(int*, size_t);
size_t howManyLessThan(int*, size_t);

//int main()
//{
//	int nineNumbers[SIZE];
//	size_t count{};
//	initArray(nineNumbers, SIZE);
//	bubbleSort(nineNumbers, SIZE);
//	printArray(nineNumbers, SIZE);
//	count = howManyLessThan(nineNumbers, SIZE);
//	cout << count << endl;
//
//
//
//	system("pause");
//	return 0;
//}
//
//void bubbleSort(int* a, size_t n)
//{
//	int buffer{};
//	for (int i = n - 1; i > 0; --i)
//		for (int j = 0; j < i; ++j)
//		{
//			if (a[j] > a[j + 1])
//			{
//				buffer = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = buffer;
//			}
//		}
//}
//void initArray(int* a, size_t n)
//{
//	cout << "Enter " << n << " integer numbers: ";
//	for (size_t i = 0; i < n; ++i)
//		cin >> a[i];
//}
//void printArray(int* a, size_t n)
//{
//	for (size_t i = 0; i < n; ++i)
//		cout << a[i] << " ";
//	cout << endl;
//}
//size_t howManyLessThan(int* a, size_t n)
//{
//	float number{};
//	size_t counter{}, i{};
//	cout << "Enter bound: ";
//	cin >> number;
//	while (i < n && a[i++] < number)
//		++counter;
//
//	return counter;
//}