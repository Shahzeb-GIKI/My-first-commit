#include <iostream>
using namespace std;

int e;
int i = 0;
int power(int n);

int main()
{
	int b;

	cout << "Enter base: ";
	cin >> b;

	cout << "Enter exponent: ";
	cin >> e;
	cout << b << "^" << e << " = " << power(b);
}

int power(int n)
{
	if (i == e)
	{
		return 1;
	}
	i++;
	return n * power(n);
}
