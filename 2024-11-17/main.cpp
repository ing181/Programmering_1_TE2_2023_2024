#include <iostream>
using namespace std;
int main()
{
    system("chcp 1252");
    int secretNumber = 36;
    int guess = 0;

    do{
        cout << "Gissa på ett tal mellan 0 och 100 >";
        cin >> guess;
        if (guess < secretNumber){

            cout << "Fel! Du gissade på ett för litet tal" << endl;
        }
        else if (guess > secretNumber) {

            cout << "Fel! Du gissade på ett för stort tal" << endl;
        }


    } while (guess != secretNumber);

    cout << "Bra! Du gissade rätt!" << endl;




    return 0;
}
