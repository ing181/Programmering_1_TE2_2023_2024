#include <iostream>
using namespace std;
   void meny();
// Ingormation om vad funktion1 g�r
// och anv�nds till.
// Information om in- och utv�rden
// Om det finns n�gra
// EX: Funktionen tar temperaturen uttryckt i
// grader Celsius som inv�rde
// och returnerar temperaturen uttryckt i Fahrenheit
void funktion1();
void funktion2();
int main()
{
    system("chcp 1252");
   // rensar kommandotolken
      system ("cls");

      meny();

    return 0;
}
void meny()
{
    int val;
    do {
    cout << "\n******************\n";
    cout << "Avsluta (0)\n";
    cout << "Alternativ 1 (1)\n";
    cout << "Alternativ 2 (2)\n";
    cout << "******************\n";
    cin >> val;

    switch (val) {

        case 0:
        cout << "Hej d�!\n";
        break;

        case 1:
       funktion1();
        break;

        case 2:
        funktion2();
        break;

        default:
        cout << "Felaktigt val!\n";
        }

    } while(val != 0);
}
void funktion1()
{
    cout << "Du valde alternativ 1\n";
}

void funktion2()
{
    cout << "Du valde alternativ 2\n";
}
