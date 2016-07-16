#include <iostream>
#include <cmath>

using namespace std;

void dPlus();    //  +
void dMinus();   //  -
void dMult();    //  *
void dDivide();  //  "/"
void dSquare();  //  ^
void dSqrt();    //  ...square root
double yahoo;    //  accurate result of (divide), (sqr) and (sqrt)

int main()
{
    bool work = true;
    cout << "Hello, this is a brand new version of an awesome calculator." << endl;

    while(work)
    {
        cout << "Choose your destiny:" << endl;
        cout << "1. Plus" << endl;
        cout << "2. Minus" << endl;
        cout << "3. Multiple" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Square" << endl;
        cout << "6. Square root" << endl;
        cout << "7. Exit" << endl;
        
        char answer;
        cin >> answer;

        switch( answer )
        {
            case '1':   dPlus();
                      cout << "Answer is " << yahoo << endl;
                      break;

            case '2':   dMinus();
                      cout << "Answer is " << yahoo << endl;
                      break;

            case '3':   dMult();
                      cout << "Answer is " << yahoo << endl;
                      break;

            case '4':   dDivide();
                      cout << "Answer is " << yahoo << endl;
                      break;

            case '5':   dSquare();
                      cout << "Answer is " << yahoo << endl;
                      break;

            case '6':   dSqrt();
                      cout << "Answer is " << yahoo << endl;
                      break;

            case '7':   work = false;
                      cout << "Thank you for your cooperation.";
                      break;

            default:  cout << "Loooser, try again" << endl;
                      break;
        }
    }

    return 0;
}

void dPlus()
{
    long long int a,b;
    cout << "Please, enter first digit" << endl;
    cin >> a;
    cout << "Please, enter second digit" << endl;
    cin >> b;
    yahoo = (a + b);
};

void dMinus()
{
    long long int a,b;
    cout << "Please, enter first digit" << endl;
    cin >> a;
    cout << "Please, enter second digit" << endl;
    cin >> b;
    yahoo = (a - b);
};

void dMult()
{
    long long int a,b;
    cout << "Please, enter first digit" << endl;
    cin >> a;
    cout << "Please, enter second digit" << endl;
    cin >> b;
    yahoo = (a * b);
};

void dDivide()
{
    double a,b;
    cout << "Please, enter first digit" << endl;
    cin >> a;
    cout << "Please, enter second digit" << endl;
    cin >> b;
    yahoo = (a / b);
};

void dSquare()
{
    double a;
    cout << "Please, enter digit" << endl;
    cin >> a;
    yahoo = pow(a,2);
};

void dSqrt()
{
    double a;
    cout << "Please, enter digit" << endl;
    cin >> a;
    yahoo = sqrt(a);
};
