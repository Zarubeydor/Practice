#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    for( int i = 0; i <= 100; i++ )
    {
        if( a % 3 == 0)
        {
            cout << "Fizz" << endl;
        } else if( a % 5 == 0 )
        {
            cout << "Buzz" << endl;
        } else if( a % 3 && a % 5 == 0 )
        {
            cout << "FizzBuzz" << endl;
        } else {
            cout << a << endl;
        }
    a += 1;
    }
    cout << "Enjoy!";
    return 0;
}
