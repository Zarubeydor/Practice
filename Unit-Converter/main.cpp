#include <iostream>
#include <cstdlib>    // system("cls")
#include <conio.h>    // getch()

using namespace std;

int main()
{
    cout << "We going to do some magic here!" << endl;
    void temp();     // Temperarure
    void weight();   // Weight
    void dist();     // Distance

    bool isActive = true;
    do{
       bool damn = true;
       while(damn){
          system("cls");      //After every calculation, console will be cleared

          cout << "What kind of magic do you want to see?" << endl;
          cout << "1. Temperature (\xF8\x46,\xF8\x43)" << endl;
          cout << "2. Weight (lbs, kg)" << endl;
          cout << "3. Distance (km, ml)" << endl;
          cout << "4. Exit(no return)" << endl;

          unsigned int magic;
          while(!(cin >> magic))
          {
              cout << "Ar U Sirius?" << endl;
              cin.clear();
              while (cin.get() != '\n');
          }
          switch(magic)
          {
              case 1: temp();
                      break;
              case 2: weight();
                      break;
              case 3: dist();
                      break;
              case 4: cout << "Bye!" << endl;
                      isActive = false;
                      damn = false;
                      break;
              default: cerr << "Try again!(press any key)" << endl;
                       getch();
                       break;
          };
       };
       isActive = false;
    } while(isActive);

    return 0;
}

void temp()
{
    cout << "\t TEMPERATURE" << endl;
    cout << "1. Fahrenheit -> Celcium" << endl;
    cout << "2. Celcium - > Fahrenheit" << endl;
    long int tempC;          // temperature Choice
    double tempFah, tempCel; // Fahrenheit, Celcius
    bool isActiveT;

    while(isActiveT)
    {
        /*if(!(cin>>tempC) || cin.get() != '\n')       //input must be integer type
        {
            cout << "Incorrect input!" << endl;
            cin.clear();
            cin.sync();
        } else {
        */                                             // old version of buggy code
        while(!(cin >> tempC))                         // input must be integer type
          {
              cin.clear();
              while (cin.get() != '\n');
              cout << "WRONG" << endl;
          };
        switch(tempC)
        {
            case 1:
                cout << "Write temperature in Fahrenheits: ";
                cin >> tempFah;
                tempCel = (( tempFah - 32 ) / 1.8);
                cout.precision(8);
                cout << tempFah << "\xF8" << "F = " << tempCel << "\xF8" << "C." << endl;
                cout << "to be continued...(press any key)";
                getch();
                isActiveT = false;
                break;

            case 2:
                cout << "Write temperature in Celcius: ";
                cin >> tempCel;
                tempFah = (( tempCel*1.8 ) + 32);
                cout.precision(8);
                cout << tempCel << "\xF8" << "C = " << tempFah << "\xF8" << "F." << endl;
                cout << "to be continued...(press any key)";
                getch();
                isActiveT = false;
                break;

        default: cout << "Try again, fool." << endl;
        };
    };
};

void weight()
{
    cout << "\tWEIGHT" << endl;
    cout << "1. Kg -> Lbs" << endl;
    cout << "2. Lbs -> Kg" << endl;
    int weC;              // weight Choice
    double weKg, weLbs;   //Kilograms, Libras
    bool isActiveW;

    while(isActiveW)
    {
        while(!(cin >> weC))
          {
              cin.clear();
              while (cin.get() != '\n');
              cout << "WRONG" << endl;
          };
        switch(weC)
          {
                case 1:
                    cout << "Write mass in kilograms: ";
                    cin >> weKg;
                    weLbs = (weKg * 2.2046);
                    cout << weKg << " kg = " << weLbs << " lbs." << endl;
                    cout << "to be continued...(press any key)";
                    getch();
                    isActiveW = false;
                    break;
                    
                case 2:
                    cout << "Write mass in libras: ";
                    cin >> weLbs;
                    weKg = (weLbs / 2.2046);
                    cout << weLbs << " lbs = " << weKg << " kg." << endl;
                    cout << "to be continued...(press any key)";
                    getch();
                    isActiveW = false;
                    break;

                default: cout << "Try again, fool.";
          };
    };
};

void dist()
{
    cout << "\tDISTANCE" << endl;
    cout << "1. Kilometers -> Miles" << endl;
    cout << "2. Miles -> Kilometers" << endl;
    int distC;              // distance Coice
    double distK, distM;    //Km, Miles
    bool isActiveD;

    while(isActiveD)
    {
        while(!(cin >> distC))
          {
              cin.clear();
              while (cin.get() != '\n');
              cout << "WRONG" << endl;
          };
        switch(distC)
          {
                case 1:
                    cout << "Write distance in km: ";
                    cin >> distK;
                    distM = (distK / 1.609);
                    cout << distK << " km = " << distM << " miles." << endl;
                    cout << "to be continued...(press any key)";
                    getch();
                    isActiveD = false;
                    break;

                case 2:
                    cout << "Write distance in miles: ";
                    cin >> distM;
                    distK = (distM * 1.609);
                    cout << distM << " miles = " << distK << " km." << endl;
                    cout << "to be continued...(press any key)";
                    getch();
                    isActiveD = false;
                    break;
                    
                default: cout << "Try again, fool.";
          };
    };
};

