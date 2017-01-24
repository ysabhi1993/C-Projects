#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
double number;
int read_char;
char ch;
cout << "Please enter a number: ";
cin >> number;
cout.precision(4);

cout << "with a sign: " << showpos << number << endl;
cout << "in decimal format: " << dec << number << endl;
cout << "in hexadecimal format, uppercase: " << uppercase << hex << number << endl;
cout << "in octal format: " << oct << number << endl;
cout << "show point example: " << showpoint << number << endl;
cout << "scientific notation: " << setw(20) << setfill('-') << internal << scientific << number << endl;
cout << "fixed point: " << fixed << number << endl;

//converting character into the respective numeric code
cout << "input a character value: ";
cin >> ch;
read_char = ch;
cout << "the character code for " << ch << " is " << dec << read_char << endl;

//outputting string
string s = "hello everyone";
cout << setfill('-') << left << setw(20) << s << endl;

//read strings with more than one word
string y,z;

cin >> z;
getline(cin,y);
cout << "this is the input string: " << z << y << endl;
 
}
