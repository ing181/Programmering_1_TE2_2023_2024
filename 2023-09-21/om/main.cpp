#include <iostream>
using namespace std;
// SLUMP
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
int main()

{
      /* initialize random seed: */
      srand (time(NULL));

     system("chcp 1252");
     iSecret = rand() % 10 + 1;   // slumptal mellan 1 och 10
    // j�mf�relseoperatorer
    // Vad �r en operator?
    // N�got som har betydelse f�r
    // det som �t till h�ger om
    // och v�nster om operatorn
    // Utmatningsoperatorn <<
    // Inmatningsoperatorn >>
    // tildelningsoperatorn =
    // j�mf�relseoperatorer
    // 5 < 4  "Mindre �n"
    // 5 > 4  "St�rre �n"
    // 5 == 4 "Lika med"
    // Om det som st�r mellan ( och )
    // �r sant utf�rs det som st�r mella
    // { och }

    cout << "Skriv in ett heltal: ";
    int heltal;
    cin >> heltal;
    // inte b�rja en variabel med en siffra
    // 1heltal heltal1
    // my age myAge my_age
    // undvik ���
    if (heltal < 4) {
       cout << "�r mindre �n fyra" << endl;
    } else {
                if (heltal < 3) {
                    cout << "�r mindre �n tv�" << endl;
                }
}
    return 0;
}
