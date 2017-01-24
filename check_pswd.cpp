#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

bool get_password(void);
string change_pswd(void);
long timediff(void);
static string pswd = "ysabhi1993";
static long max_count = 3, max_time = 60;

int main()
{
	char option;
	bool check_pswd;
	cout << "Enter A if you want to login: " << endl;
	cout << "Enter B if you want to change password: " << endl;
	cout << "Enter your option: ", cin >> option;
	
	switch(option)
	{
		case 'A':
		{
			check_pswd = get_password();
			if(check_pswd == true)
				cout << "You have logged in " << endl;
			else
				cout << "Wrong password. Try again later " << endl;
		break;		
		} 			
		case 'B':
		{		
			string word;			
			word = change_pswd();
			if (word != pswd)
			{
				cout << "Your password has been changed" << endl;
				pswd = word;
			}				
			else
				cout << "Try again later" << endl;
		break;		
		}
}
	cout << "The new password is: " << pswd << endl;
}


bool get_password()
{
bool key_match = false;
string word;
int count = 0, time = 0;

timediff();

while (key_match == false)
{
	if(time <= max_time && ++count <= max_count)
	{	
		cout << "Enter the password: ", cin >> setw(20) >> word;
		time += timediff();
		if (time >= max_time)
			break;
		if (word == pswd)
		{
			key_match = true;
			break;
		}
	}
	else
		break;
}
return key_match;
}

string change_pswd()
{
	int count = 0;
	static string word;
	string word1, word2;	
	while (count <= 3)
	{		
		cout << "Enter your current password: ", cin >> word;	
		if (pswd == word)
		{
			do
			{			
				cout << "Please enter new password: ", cin >> word1;
				cout << "Re-enter the new password: ", cin >> word2;
				if (word1 != word2)
					cout << "Passwords dont match" << endl;
			}
			while (word1 != word2);	
			word = word2;			
			count = 4;	
		}	
		else
		{
			count += 1;	
			cout << "You entered the incorrect password. Please try again" << endl;
		}	
	}
	return word;
}

long timediff()
{
	static long sec = 0;
	long old_time = sec;
	time( &sec);
	return (sec - old_time);
}
		
