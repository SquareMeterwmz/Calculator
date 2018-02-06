#include <iostream>
#include <string>
char* input(void);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	short length;
	
	char* pFormula = input();
	length = (*pFormula).size();
	//cout <<pFormula;
	//cin.get();
	//delete [] pFormula;
	return 0;
}

char* input(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	char temp[100];
	int length;
	
	cout << "Please enter the formula: \n";
	cin.getline(temp, 100);
	length = strlen(temp)+1;
	cout <<length<<endl;
	char * pFormula = new char [length];
	for (short i = 0; i <= length; i++)
	{
		pFormula[i] =temp[i];
	}
	cout << pFormula;
	cin.get();
	return pFormula;
}