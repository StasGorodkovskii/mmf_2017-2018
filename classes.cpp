#include<iostream>



using namespace std;

class NewYear
{
private:

	int currentYear;
	int theNextYear;

public:

	void enterData()
	{
		cout << "Enter the current year: ";
		cin >> currentYear;
		cout << "Enter the next year:";
		cin >> theNextYear;
	}

	void displayData()
	{
		cout << "The current year: " << currentYear << endl;
		cout << "The next year: " << theNextYear << endl;
	}

};

int main()


{


	NewYear n1;
	n1.enterData();
	n1.displayData();





	system("pause");
	return 0;


}