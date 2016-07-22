#include <iostream>
#include <cstdlib>

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
          cout << "1. Temperature (F,C)" << endl;
          cout << "2. Weight (lbs, kg)" << endl;
          cout << "3. Distance (km, ml)" << endl;
          cout << "4. Exit(no return)" << endl;

          int magic;
          cin >> magic;
          switch(magic)
          {
             /* case 1: temp();
                      break;
              case 2: weight();
                      break;
              case 3: dist();
                      break; */
              case 4: cout << "Bye!" << endl;
                      isActive = false;
                      damn = 0;
                      break;
              default: cout << "dayum" << endl;
          }
       }
       isActive = false;
    } while(isActive);
    
    return 0;
}
