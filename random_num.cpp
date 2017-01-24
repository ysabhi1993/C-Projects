#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
unsigned int seed;
int r1, r2, r3;

string line(40, '-'); 

cout << "enter a non-negative integer ";
cin >> seed;

srand(seed);

r1 = rand();
r2 = rand();
r3 = rand();

cout << "randomly generated numbers: " << r1 << "," << r2 << "," << r3 << endl;
cout << line << endl;

}
