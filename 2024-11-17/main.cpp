#include <iostream>
using namespace std;
int main()
{
    system("chcp 1252");
    int secretNumber = 36;
    int guess = 0;

    do{
        cout << "Gissa p� ett tal mellan 0 och 100 >";
        cin >> guess;
        if (guess < secretNumber){

            cout << "Fel! Du gissade p� ett f�r litet tal" << endl;
        }
        else if (guess > secretNumber) {

            cout << "Fel! Du gissade p� ett f�r stort tal" << endl;
        }


    } while (guess != secretNumber);

    cout << "Bra! Du gissade r�tt!" << endl;




    return 0;
}
