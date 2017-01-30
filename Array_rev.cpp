#include <iostream>
#include <iomanip>
using namespace std;
void reverse(int *, int);
int main()
{
	int a[5];
	int *p;
	p = &a[0];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a value: ", cin >> *(p + i);
	}
	reverse(p, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << "The value: " << a[i] << endl;
	}

	system("pause");
}

void reverse(int *a, int b)
{

	int *c = new int[b];
	for (int i = 0; i < b; i++)
		c[i] = a[b - i - 1];
	for (int i = 0; i < b; i++)
		a[i] = c[i];

}