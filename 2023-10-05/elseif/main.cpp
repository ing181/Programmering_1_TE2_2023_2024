
// Figur 4.3 sidan 43, Exempel 4.3 sidan 44
#include <iostream>
using namespace std;

int main()
{
    system("chcp 1252");
    cout << "Ange temperatur: ";
    int temp;
    cin >> temp;
   // Version 1
   if (temp == 100){
        cout << "Nu kokar vattnet" << endl;
   } else
       if (temp == 50) {
        cout << "Halvvägs till 100" << endl;
        }
       else {
        cout << "Inte exakt 100 grader" << endl;
    }

    // Version 2
   if (temp == 100){
        cout << "Nu kokar vattnet" << endl;
   }
   if (temp == 50) {
        cout << "Halvvägs till 100" << endl;
        }
   else {
        cout << "Inte exakt 100 grader" << endl;
    }

    return 0;
}
