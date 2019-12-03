

#include <iostream>
using namespace std;

int sum(int n);

int main()
{
	int num;
	cout << "Enter a positive integer: ";
	cin >> num;
	cout << "Sum = " << sum(num);
}

int sum(int n)
{
	if (n<1)
	{
		return 0;
	}
	return n + sum(n - 1);
}
