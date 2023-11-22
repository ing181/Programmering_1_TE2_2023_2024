// Variant på Exempel 13.12
#include <iostream>
using namespace std;
int main()
{
    const int rows = 4;
    const int cols = 6;
    int gameBoard[rows][cols]={{1,0,0,1,0,0},{1,0,0,1,0,0},{1,0,0,0,0,0},{0,0,1,1,1,1}};

    // Den yttre for-loopen går igenom arrayen vågrätt
    cout << " |A|B|C|D|E|F|";
    for (int i=0; i<rows; i++){

        cout <<endl << "-------------" << endl;
        // Kolla ASCCI tabellen
        char bokstav=65+i;
        cout <<  bokstav << "|";
        for (int j=0; j<cols; j++){
        cout << gameBoard[i][j] << "|";

        }
    }
    cout << endl;

    return 0;
}
