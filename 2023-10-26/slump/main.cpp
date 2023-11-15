#include <iostream>
using namespace std;
int main()
{
    // Antalet sekunder
    // sedan 1 januari 1970
    // klockan 00.00
    // time(0)

    srand(time(0));



    cout << "RAND_MAX " << RAND_MAX;
    for (int i=0; i<10; i++){

       cout << (rand() % 5) + 1 << ' ';
    }

    // Om char
    cout << endl;
    char c = 97;
    cout << c << endl;
    c = c + 1;
    cout << c << endl;

    cout << endl;
    return 0;
}
