#include <iostream>
#include <time.h>
using namespace std;

void delay_t();
void lottery(int, int);
int main()
{
	double a;
	int i;
	cout << "Lottery begins in:" << endl;
	for (i = 2; i > 0; i--)
	{
		a = 300000000;
		while (a)
		{
			a--;
		}
		
			
		cout << i << endl;

	}
	lottery(5, 5);
	system("pause");
}

void lottery(int no_of_tickets, int ticket_picked)
{
	time_t sec = 0;
	srand(time(&sec));
	int *tickets_hold = new int[ticket_picked];
	if (no_of_tickets < ticket_picked)
		return;

	for (int i = 0; i < ticket_picked ; i++)
	{
		tickets_hold[i] = rand() % no_of_tickets;
		for (int j = 0; j < i + 1; j++)
		{
			if (tickets_hold[i] == tickets_hold[j] && i != j) 
			{
				i--;
				break;
			}
			else if (j == i)
				cout << tickets_hold[i] + 1 << endl;
		}
		
		//cout << "randomly generated: " << tickets_hold[i]  + 1<< endl;
	}

	delete[]tickets_hold;
}

