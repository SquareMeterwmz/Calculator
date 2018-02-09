#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b[20];
	getline(cin, a);
	a[0] = 1;
	for (int i = 0; i <(a.size()+1);i++)
	{
		b [i]= a[i];
		cout << b[i]<<char(b[i])<<" ";
	}
	cin.get();
	cin.get();
	return 0;
}
