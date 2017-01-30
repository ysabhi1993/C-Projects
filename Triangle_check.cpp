#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	string triangle_type;
	if (a == 0 || b == 0 || c == 0)
		triangle_type = "one of the sides is zero";
	else if (a + b <= c)
		triangle_type = "triangle cannot be formed";
	else if (a == b && a == c)
		triangle_type = "equilateral";
	else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
		triangle_type = "isosceles";
	else if (a != b && a != c && b != c)
		triangle_type = "scalene";

	cout << triangle_type.c_str() << endl;
	system("pause");

}