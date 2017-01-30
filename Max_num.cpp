#include <iostream>
#include <iomanip>
using namespace std;
int max_num(int *, int);
int main()
{
	int b;
	int max;
	cout << "Enter the number of elements in the array: ", cin >> b;

	int *p = new int[b];
	for (int i = 0; i < b; i++)
	{
		cout << "Enter " << i + 1 << "th number: ", cin >> p[i];
	}

	max = max_num(p, b);
	cout << " the max number you entered: " << max << endl;
	system("pause");
}

int max_num(int *p, int b)
{
	int temp;
	for (int i = 0; i < b - 1; i++)
	{
		if (p[i] > p[i + 1])
		{
			temp = p[i];
			p[i] = p[i + 1];
			p[i + 1] = temp;
		}
	}
	return p[b - 1];
}