#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[5][5];
	a[1][1] = 1;

	for (int i = 0; i < 5; i++)
	{
		a[i][0] = 1;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < j)
				a[i][j] = 0;
		}
	}
	for (int i = 2; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (i >= j)
				a[i][j] = a[i-1][j] + a[i-1][j-1] ;
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			cout << setw(5) <<a[i][j] ;
		}
		cout << endl;
	}
	
	
	system("pause");
}