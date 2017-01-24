#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int x;
int y;

cout << "Enter an integer: ";
cin >> x;
cout << "Enter a decimal number: ";
cin >> y;

cout << "Sum: " << x + y << endl;
cout << "Difference: " << x - y << endl;
cout << "Product: " << x * y << endl;
cout << "Division: " << x / y << endl;

cout << "Remainder when x is divided by y: " << x % y << endl;

cout << "pre-increment: " << ++x << " post-increment: " << x++ << endl;
cout << "after post-increment: " << x << endl; 

cout << "result: " <<  -4*x - --y + y%4  << endl;
cout << y << endl;

int a=0, b=0, c=0;

bool res = ++a || ++b && ++ c;
cout << "result of res: " << a << b << c << endl;


}  
