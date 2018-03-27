#include<iostream>


using namespace std;

const size_t theNumberOfElementsinArray = 256;

bool isSymbolOrSpase(char);

int main()
{

	char text[theNumberOfElementsinArray] = { 0 };

	cout << "Enter English text: ";
	cin.getline(text, theNumberOfElementsinArray);

	for (size_t i = 0; i < strlen(text) - 1; i++)
	{
		if (!isSymbolOrSpace(text[i]))
		{
			for (size_t j = 0; j < strlen(text) - 1; j++)
				text[j] = text[j + 1];
			j = j - 1;
			text[strlen(text)] = '/0';
		}

	}

	cout << text;
	cout << endl;




}


bool isSymbolOrSpace(char symbo)
{
	if ((symbo >= 65 && symbo <= 90) || (symbo >= 97 && symbo <= 122) || symbo == 32)
		return true;
	else
		return false;
}