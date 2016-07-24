#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    cout << "We going to do some magic here!" << endl;
    void temp();
    void weight();
    void dist();

    bool isActive = true;
    do{
       unsigned int damn = 1;
       while(damn){
          system("cls");

          cout << "What kind of magic do you want to see?" << endl;
          cout << "1. Temperature (\xF8\x46,\xF8\x43)" << endl;
          cout << "2. Weight (lbs, kg)" << endl;
          cout << "3. Distance (km, ml)" << endl;
          cout << "4. Exit(no return)" << endl;

          int magic;
          cin >> magic;
          switch(magic)
          {
              case 1: temp();
                      break;
              /*case 2: weight();
                      break;
              case 3: dist();
                      break;  */
              case 4: cout << "Bye!" << endl;
                      isActive = false;
                      damn = 0;
                      break;
              default: cerr << "Try again!(press any key)" << endl;
                       getch();
          }
       }
       isActive = false;
    } while(isActive);

    return 0;
}


void temp()
{
    cout << "\t TEMPERATURE" << endl;
    cout << "1. Fahrenheit -> Celcium" << endl;
    cout << "2. Celcium - > Fahrenheit" << endl;
    int tempC;
    double tempFah, tempCel;
    bool isActT;

    while(isActT)
    {




        if(!(cin>>tempC) || cin.get() != '\n')
        {
            cout << "Incorrect input!" << endl;
            cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
            cin.sync();//Удалим данные из буффера
        } else {


            switch(tempC)
            {
            case 1:
                cout << "Write temperature in Fahrenheits:" << endl;
                cin >> tempFah;
                tempCel = (( tempFah - 32 ) / 1.8);
                cout.precision(4);
                cout << tempFah << "\xF8" << "F = " << tempCel << "\xF8" << "C." << endl;
                getch();
                isActT = false;
                break;

            case 2:
                cout << "Write temperature in Celcius:" << endl;
                cin >> tempCel;
                tempFah = (( tempCel*1.8 ) + 32);
                cout.precision(4);
                cout << tempCel << "\xF8" << "C = " << tempFah << "\xF8" << "F." << endl;
                getch();
                isActT = false;
                break;

            default: cout << "Try again, fool.";
            };

        }
    }
};
