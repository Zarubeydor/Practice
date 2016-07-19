#include <iostream>

using namespace std;

int main()
{
    unsigned long long int fib = 0;
    unsigned long long int fib1 = 0;
    unsigned long long int fib2 = 1;

	cout << "Enter the number: " << endl;
	int Nth;
	cin >> Nth;

    for( int i = 0; i <= Nth; i++)
    {
        cout << fib << " ";
        fib1 = fib2;
        fib2 = fib;
        fib = fib1 + fib2;
    }
	return 0;
}
