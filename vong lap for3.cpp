#include <iostream>
using namespace std;

int main()
{
	int i, j, tich;
	cin >> i;
	tich = 0;
	
		for (j = 1; j <= 10; j++)
		{
			tich = i*j;
			cout << i << "x" << j << "=" << tich << endl;
		}
	}
