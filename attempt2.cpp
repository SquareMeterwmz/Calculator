#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b[20];
	getline(cin, a);
	for (int i = 0; i <(a.size()+1);i++)
	{
		b [i]= a[i];
		cout << b[i]<<",";
	}
	//���ַ�����ASCII����ʽ�洢
	cin.get();
	cin.get();
	return 0;
}
