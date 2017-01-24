#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

char option;
cout << "Enter A to compute sum and average of a sequence of numbers" << endl;
cout << "Enter B to calculate the exchange rate of a currency value" << endl;
cout << "Enter C to calculate the sum of first n integers" << endl;
cout << "Enter D to keep a check on the speed" << endl; 
cout << "Enter E to generate a multiplication table: " << endl;

cout << "Enter an option for the above operations: ", cin >> option;

switch(option)
{
case 'A':
{
int count = 0,x;
float sum = 0;

cout << "Enter a sequence of numbers separated by spaces: " << endl;

//demonstrate while loop - calculate average of inputs
while (cin >> x) 
{
	sum += x;
	count ++;
}


cout << "The sum of all the inputs: " << sum << endl;
cout << "The avg of the inputs: " << sum/count << endl;
break;
}
case 'B':
{
long euro, maxeuro;
double rate;

cout << "Enter an exchange rate: ",cin >> rate;
cout << "Enter a maximum euro: ";
cin >> maxeuro;

cout.precision(2);

long lower, upper, step;

//demonstrate nested for loop - calculate exchange rate 
for (lower = 1, step = 1; lower <= maxeuro; step *=10, lower = 2*step)
	for (euro = lower, upper = step * 10; euro <= upper && euro <= maxeuro; euro += step)
	{
		cout << setw(12) << euro << setw(20) << euro*rate << endl;	
	}
break;
}
case 'C':
{
//demonstrate do-while loop - calculate sum of first r numbers with r <= n
int r_sum = 0;
int n,r = 0;

cout << "maximum number to record output for: ", cin >> n;

do
{
	r_sum = 0;
	for (int i = 0; i <= r; i++)
	{	
		r_sum += i;
		
	}
cout << "sum of first " << r << " numbers is: " << r_sum << endl;
}
while(r++ <= n);
break;
}
case 'D':
{
//demonstrate if-else statement with traffic speed limit
float speed;
const int limit = 60;

cout << "Enter a speed: ";

while (cin >> speed)
{
if (speed < limit)
	cout << "Safe, under speed limit" << endl;
else if (speed >= limit && speed < limit + 10)
	cout << "Warning, Over the limit" << endl;
else if (speed >= limit + 10)
	cout << "Dangerous, Too fast" << endl; 
}
break;
}
case 'E':
{
int n,i = 1;
cout << "Enter an integer value to generate multiplication table: ", cin >> n;
cout << setw(5) << " ";
while (i<=n)
{
cout << setw(5)  << i ;
i++;
}
cout << endl;
cout << "----------------------------------------------------------" << endl;
i = 1;

while (i<=n)
{
int j = 1;
	cout << setw(5) << i << " |" ;	
	while(j<=n)
	{ 			
		cout << setw(5) << i * j;
		j++;
	}
	cout << endl;
i++;
}
break;
}
default: 
	cout << "Enter a valid option" << endl;
}


}
