#include <iostream>
using namespace std;

const double pi = 3.141593; 

int main()
{
float area, circumference,radius;

cout << "Please enter a radius: ";
cin >> (radius);

area = pi * radius * radius;
circumference = 2 * pi * radius;

cout << "area of the circle is " << area << endl;
cout << "circumference of the circle is " << circumference << endl;

} 
