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
    // jämförelseoperatorer
    // Vad är en operator?
    // Något som har betydelse för
    // det som ät till höger om
    // och vänster om operatorn
    // Utmatningsoperatorn <<
    // Inmatningsoperatorn >>
    // tildelningsoperatorn =
    // jämförelseoperatorer
    // 5 < 4  "Mindre än"
    // 5 > 4  "Större än"
    // 5 == 4 "Lika med"
    // Om det som står mellan ( och )
    // är sant utförs det som står mella
    // { och }

    cout << "Skriv in ett heltal: ";
    int heltal;
    cin >> heltal;
    // inte börja en variabel med en siffra
    // 1heltal heltal1
    // my age myAge my_age
    // undvik åäö
    if (heltal < 4) {
       cout << "Är mindre än fyra" << endl;
    } else {
                if (heltal < 3) {
                    cout << "Är mindre än två" << endl;
                }
}
    return 0;
}
