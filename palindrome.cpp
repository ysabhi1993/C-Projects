#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string header = "*********Checking for a palindrome********",
       line(50,'-'),
       input_str = "Enter a word to check if its a palindrome: "; // global variables

int main()
{

string word;
char key = 'y';

cout << header << endl;
while (key == 'y' || key == 'Y')
{
	cout << line << endl;
	cout << input_str, cin >> word;
	int i = 0, j = word.length() - 1;
	for (; i<=j; i++,j--)
	{
		if ( word[i] != word[j] )
		break; 
	}
	if (i > j)
		cout << "the word you entered is a palindrome" << endl;
	else
		cout << "it is not a palindrome" << endl;
	
	cout << "Repeat? (y/n) ";
	
	do
		cin.get(key);
	while (key != 'y' && key != 'Y' && key != 'n' && key != 'N');
	cin.sync();
}
}
