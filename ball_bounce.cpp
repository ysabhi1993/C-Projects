#include <iostream>
#include <string>
//#include <conio2>
using namespace std;

#define DELAY 10000000L
#define CLS (cout << "\033[2J")
#define LOCATE(z,s) (cout << "\033[" << z << ";" << s << "H")
#define COLOR(f,b) (cout << "\033[1;3" << (f) << ";4" << (b) << "m")
#define NORMAL (cout << "\033[0m")
#define ESC 27

int main()
{
int x = 2, y = 3, dx = 1, speed = 0;
string floor(79,'-'), header = "Its all in the game";
string commands = "[ESC] = terminate; [+] = speed up; [-] = slow down";
char option;
bool end = false;
unsigned long delay = 1000000;

CLS;
LOCATE(1,25);cout << header;
LOCATE(25,1);cout << floor;
LOCATE(25,10);cout << commands;


while(!end)
{
	LOCATE(y,x); cout << 'o' << endl;
	for(int i = 0; i < DELAY; i++) 
	;
	if (x == 1 || x == 79) dx = -dx;

	if (y == 24)
	{
		speed = -speed;
		if (speed == 0) speed = -7;
	}
	speed += 1;
	LOCATE(y,x); cout << 'o' << endl;
	y += speed, x += dx;

	if (cin >> option )
	{
		switch(option)
		{
			case '+' : delay -= delay/5; break;
			case '-' : delay += delay/5; break;
			case ESC : end = true;  
		}
	}

}
NORMAL;
}

