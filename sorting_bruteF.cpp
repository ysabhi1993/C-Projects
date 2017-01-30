#include <iostream>
#include <iomanip>
using namespace std;

void sort_array(int *, int);
int main()
{
	int b = 4;
	int *p = new int[b];
	for (int i = 0; i < b; i++)
	{
		cout << "enter " << i+1 << "th number: ", cin >> p[i];
	}
	sort_array(p, b);
	
	for (int x = 0; x < 4; x++)
	{
		cout << "enter " << x + 1 << "th number: " << p[x] << endl;
	}
	delete p;
	system("pause");
	
}

void sort_array(int *a, int b)
{
	int temp;
	for (int j = 0; j < b; j++)
	{
		for (int i = b - 1; i > j; i--)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}