#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
char option;
cout << "Choose A to add line numbers to the file." << endl;
cout << "Choose B to convert all the characters in the line to upper-case." << endl;
cout << "Please choose an option: ",cin >> option;
switch (option)
{
case 'A':
{
	string line;
	int number = 0;

	while (getline(cin,line))
	{
		cout << setw(3) << ++number << " " << line << endl;
	}
}
case 'B':
{
	char ch;
	int num; 
	while (cin.get(ch))
	{
		++num;		
		if (islower(ch))
		{
			ch = toupper(ch);
		}		
		cout.put(ch);	
	}

cout << "Total number of characters: " << num << endl;
}
return 0;
}
}
