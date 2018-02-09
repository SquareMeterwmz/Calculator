#include <iostream>

int main()
{
	char a[30]{ "123+456-(789-12)/3456789" };
	char *p = a;

	for (int i = 0; i < 30; i++)
	{
		if ((p[i] > 47)&(p[i]<58))
			p++;
	}
}