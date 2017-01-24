#include <iostream>
#include <cmath>
using namespace std;

long fact_loop(unsigned int a);
long fact_recr(unsigned int a);

int main()
{
unsigned int a;
long b, c;

cout << "enter a number to find factorial: ", cin >> a;
b = fact_loop(a);
c = fact_recr(a);

cout << "result when solved using loops: " << b << endl;
cout << "result when solved recursively: " << c << endl;

}

long fact_loop(unsigned int a)
{
	long b = 1;
	while(a>1)
	{
		b = b * (a);
		a--;	
	}
return b;
}

long fact_recr(unsigned int a)
{
	long b = a;	//type conversion so that larger values of 'a' factorial can be calculated. 
	if (b == 1)
		return 1;
	else
		b *= fact_recr(b-1);
return b;
}


