#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    double eps , x , y_prev , y_next ; 
    cout << "Enter number:  " ;
    cin >> x ;
    cout << " Enter precision: " ;
    cin >> eps ;
    y_prev = 1;
    y_next = (y_prev + x / y_prev) / 2;
    while (abs(y_prev - y_next ) > eps)
    {
    	y_prev = y_next ;
    	y_next = (y_prev + x / y_prev) / 2;
    	
    }
    cout << " prox y sqrt = "  << y_next ;
	  
    
	return 0;
}
