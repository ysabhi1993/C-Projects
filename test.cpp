#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
string a, b, c;

cout << "Enter a string: ", getline(cin, a);
cout << "Enter another string: ", getline(cin, b);

c = a+b;
b = a;
a = c.erase(0,b.length());



cout << a << " and " << b << endl;







}
