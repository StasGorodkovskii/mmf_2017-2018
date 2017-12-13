#include <iostream> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <windows.h> 
using namespace std;
const int n = 10;
void funcSearch(int A[n]);

//int main()
//{
//	
//	srand(GetTickCount());
//	int A[100] = { -1, -10, 10, -10, 20 };
//	for (int i = 0; i<n; i++)
//	{
//		A[i] = rand() % 19 - 9;
//		cout<<A[i]<<" ";
//	}
//
//	funcSearch(A);
//	system("pause");
//	return 0;
//}
//
//void func(int A[n])
//{
//	srand(GetTickCount());
//	int pos = A[0], neg = A[0], k = 0, i = 0, g = 0;
//	while (k == 0 && i<n)
//	{
//		if (A[i]>0)
//		{
//			pos = A[i];
//			k = 1;
//		}
//		i++;
//	}
//	i = n;
//	while (g == 0 && i>0)
//	{
//		if (A[i]<0)
//		{
//			neg = A[i];
//			g = 1;
//		}
//		i--;
//	}
//	cout<<endl<<"Polo "<<pos<<endl<<"Otr "<<neg<<endl;
//
//}
//
