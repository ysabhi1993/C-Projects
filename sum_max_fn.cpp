#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

long sum(double a, double b, double c = 0, double d = 0);
long max(double a, double b, double c = 0, double d = 0);

int main()
{

srand((unsigned int)time(NULL));

//double a = rand()/10, b = rand()/10, c = rand()/10, d = rand()/10;
double a,b,c,d;

cout << "randomly generated numbers, a = ", cin >> a;// << endl;
cout << "randomly generated numbers, b = ", cin >> b;// << b << endl;
cout << "randomly generated numbers, c = ", cin >> c;// << c << endl;
cout << "randomly generated numbers, d = ", cin >> d;// << d << endl << endl;

long sum_2 = sum(a,b);
cout << "sum of 2 randomly generated numbers: " << sum_2 << endl;
long max_num_2 = max(a,b);
cout << "max of the 2 randomly generated numbers: " << max_num_2 << endl << endl;

long sum_3 = sum(a,b,c);
cout << "sum of 3 randomly generated numbers: " << sum_3 << endl;
long max_num_3 = max(a,b,c);
cout << "max of 3 randomly generated numbers: " << max_num_3 << endl << endl;

long sum_4 = sum(a,b,c,d);
cout << "sum of 4 randomly generated numbers: " << sum_4 << endl;
long max_num_4 = max(a,b,c,d);
cout << "max of 4 randomly generated numbers: " << max_num_4 << endl << endl;

}

inline long sum(double a, double b, double c, double d)
{
return (a+b+c+d);
} 

long max(double a, double b, double c, double d)
{
	double max_num = 0;
	if (a < b)
		max_num = b;
	else
		max_num = a;

	if (max_num < c)
		max_num = c;
	else
		max_num = max_num;

	if (max_num <d)
		max_num = d;
	else
		max_num = max_num;	

return max_num;
}










