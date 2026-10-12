// Lab 5_1
// Піх Юлії РІ-11

#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); // прототип
int main()
{
	double r, s;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	double a = (g(1, r) + g((s * s)-1, r*r ))/g(s, 1+r);
	cout << "a = " << a << endl;
	return 0;
}
double g(const double x, const double y) // визначення
{
	return (x * x + y * y+sin(x*y)) / (1 + abs(x * y));
}