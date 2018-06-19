#include<iostream>







using namespace std;

const size_t N = 256;


class House
{
public:

	House(int numberOfFlours0 = 0, int numberOfFlats0 = 0, int operationPeriod0 = 0, int timeLimitToRepair0 = 0, int houseNumber0 = 0, int flatNumber0 = 0)
	{
		numberOfFlours = numberOfFlours0;
		numberOfFlats = numberOfFlats0;
		operationPeriod = operationPeriod0;
		timeLimitToRepair = timeLimitToRepair0;
		houseNumber = houseNumber0;
		flatNumber = flatNumber0;
		//N = n0;
		//street[N] = '/0';
	}



	void enterData()
	{
		cout << "Enter the street: ";
		cin.getline(street, N);
		cout << "Enter the number of house: ";
		cin >> houseNumber;
		cout << "Enter the number of flat: ";
		cin >> flatNumber;
		cout << "Enter the number of flours: ";
		cin >> numberOfFlours;
		cout << "Enter the number of flats: ";
		cin >> numberOfFlats;
		cout << "How many years from the latest reparation?  : ";
		cin >> operationPeriod;

	}


	void displayData()
	{
		cout << "Street: " << street << endl;
		cout << "House's number: " << houseNumber << endl;
		cout << "Number of flat: " << flatNumber << endl;
		cout << "The numbers of flours: " << numberOfFlours << endl;
		cout << "The number of flats: " << numberOfFlats << endl;
		cout << "The latest reparation was: " << operationPeriod << " years ago" << endl;
	}

	void majorRepair()
	{
		int majorRepair = 25 - operationPeriod;
		if (majorRepair < 0)
		{
			cout << "Repair period has expired " << abs(majorRepair) << " years ago !" << endl;
		}
		else
			cout << "The major repair will be in " << majorRepair << " years" << endl;
	}


private:


	int numberOfFlours, numberOfFlats, operationPeriod, timeLimitToRepair, houseNumber, flatNumber;
	char street[N];



};





int main()
{

	House house24;
	house24.enterData();
	house24.displayData();
	house24.majorRepair();











	system("pause");
	return 0;




}
