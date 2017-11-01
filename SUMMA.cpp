#include <iostream>
#include <cmath>
using namespace std;



double summa ( double , double );



int main() {
	double x ,  eps ;
	cout << "Enter number:  " ;
	cin >> x ;
	cout << fmod (x, 2* M_PI) << endl;
	cout <<  " Enter precision:  " ;
	cin >> eps;
	cout << " My function: " << summa( x , eps ) << endl ; 
	cout << " Library function: " << cos( x ) ;
	return 0;
}




double summa ( double x , double eps ) 
{
	double s = 0 ;
	int m = 0 ;
	
 
 x =  fmod (x, 2 * M_PI) ;
 double term_1 = 1;
 s+=term_1 ; 
 ++m;

 double term_2 = -(term_1 * x * x) / ((2*m - 1)* 2 * m) ; 
 while (abs(term_2) >= eps)
 {
 	s+=term_2;
 	term_1 = term_2 ; 
 	++m;
 	term_2 = -(term_1 * x * x)/ ((2*m - 1)* 2 * m) ;
 	
 }
  return s ;	
}
