#include <iostream>


using namespace std;


int main()
{
	

	long long
		n = 0, 
		tmp = 0; 

	size_t
		k = 0, 
		count =  1 , 
		t = 0, 
		numeral = 0, 
		max = 1 ; 

	cout << "Enter number: ";
	cin >> n;

	tmp = n;
	while (tmp)
	{
		++k;
		tmp /= 10;
	}

	//cout << k << endl;

	tmp = n;
	for (size_t i = 0; i < k; i++)
	{
		t = tmp % 10; 
		//cout << t << endl;
		tmp /= 10; 
		if ((tmp % 10) == t) 
		{
			++count;
		}
		else 
		{
			if (count > max) 
			{
				max = count;
				numeral = t;
			}
			
		}
	}

	cout << endl;

	if (max == 1)
		cout << " Only 1 time" << endl;
	else
		cout
		<< "Digit: "
		<< numeral << endl
		<< "Length: "
		<< max
		<< endl;



	
	cout << endl << "......................" << endl;
	return 0;
}
