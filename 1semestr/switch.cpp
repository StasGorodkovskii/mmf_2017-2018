#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day;
	cout << " Enter number from 1 to 31:  " ;
	cin >> day; 
	if ( day < 1 || day > 31)
	cout << " INcorrect input . Try again  " << endl ;
		
	
	
	

	
	
		switch( day % 7)
		{
			case 1 :
				cout << " Monday " << endl ;
				break;
			case 2 :
				cout << " Tuesday " << endl ; 
				break;
			case 3 : 
				cout << " Wensday " << endl ; 
				break;
			case 4 : 
				cout << " Thursday " << endl ; 
				break;
					case 5 : 
				cout << " Friday " << endl ; 
				break;
					case 6 : 
				cout << " Saturday " << endl ; 
				break;
					case 0 : 
				cout << " Sunday " << endl ; 
				break;
		}
	
	
	int month;
		cout << " Enter number from 1 to 12:  " ;
	cin >> month; 
	if ( month < 1 || month > 12)
	cout << " Incorrect input " << endl ;
	else
	{
		switch(month)
		{
			case 12 :
			
			case 1 :
		
			case 2 : 
				cout << " Winter " << endl ; 
				break;
			case 3 : 
			
					case 4 : 
			
					case 5 : 
				cout << " Spring " << endl ; 
				break;
					case 6 : 
					case 7 :
					case 8:
						cout <<  " Summer " << endl;
						 break;
						case 9 : 
					case 10 :
					case 11:	 
						cout <<  " Osen " << endl;
						 break;
				
		}
	}
	
	
	return 0;
}
