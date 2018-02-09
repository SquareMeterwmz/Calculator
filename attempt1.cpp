#include <iostream>

int main()
{
	const int length = 30;
	int a[length]{ 49,53,54,43,51,53,43,48,45,56,47,50,0 };
	int numbers[length]{};
	int numbers_order=0;
	int *p = a;
	int * pnumberstat = a, *pnumberend = a;
	
	for (int i = 0; i < length; i++)
	{
		if ((p[i] > 47)&&(p[i] < 58))
		{
			if ((p[i-1] <= 47)||(p[i-1] >= 58))
			{
				pnumberstat = pnumberend = &p[i];
			}
			else
			{
				pnumberend = &p[i];
			}
		}
		if ((p[i] <= 47) || (p[i] >= 58))
		{
			if ((p[i-1] > 47) && (p[i-1] < 58))
			{
				int * ptemp = pnumberstat;
				int number = (*ptemp)-48;
				do
				{
					ptemp++;
					number += (10 * ((*ptemp)-48));
				} while (ptemp != pnumberend);
				numbers[numbers_order] = number;
				numbers_order++;
				//*pnumberstat = number;
				//for (int j=i ,int*ptemp2=(++pnumberstat) ; j <= length;j++)
				//{
				//	*ptemp2 = p[j];
				//	ptemp2++;
				//}
				//p = (++pnumberstat);
			}
		}
		p++;
	}
	for (int i= 0; i < length;  i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cin.get();
	//Ê¶±ğÊı×Ö
}