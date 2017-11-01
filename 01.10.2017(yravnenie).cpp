#include <iostream>
#include <math.h>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
double a , b , c , d , x1, x2 , x3 , x4 , y1 , y2 ;
cout << "Enter three numbers: " ;
cin >> a;
cin >> b;
cin >> c;
d = b*b - 4 * a * c ;
  if ( d < 0 )  
  {
  	cout<< " No real roots " <<  endl;
  	
  }
  else 
  {
  	y1 = (- b + sqrt(d)) / 2*a ;
  	y2 = (- b - sqrt(d)) / 2*a ;
    if(y1 < 0 && y2 < 0)
    {
    		cout << "No real roots"  <<  endl;
    		
    }
  else if( y1>=0)
  {
  	if( y2 >= 0)
  	{
  		x1 = sqrt (y1);
  		x2 = - sqrt (y1);
  		x3 = sqrt (y2);
  		x4 = - sqrt (y2) ; 
  		cout << " x1 = " << x1 
  			 <<	" x2 = " << x2
			 << " x3 = " << x3
			 << " x4 = " << x4
			 << endl;   		
  	}
  	else 
  	
  	{
  	    x1 = sqrt (y1);
  		x2 = - sqrt (y1);
		  	cout << " x1 = " << x1 
  			     <<	" x2 = " << x2	
  			     << endl;
  	}
  }
  
  	else
  	{
  		x1 = sqrt (y2);
  		x2 = - sqrt (y2) ; 
		cout << " x1 = " << x1 
  			 <<	" x2 = " << x2	
  			     << endl;	
  	}
  	
  }
  
	return 0;
}
