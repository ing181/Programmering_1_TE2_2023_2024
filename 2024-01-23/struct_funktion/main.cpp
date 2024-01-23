#include <iostream>
using namespace std;
// struct Exempel 11.5, sidan 93
// Definition av en struct
struct Dog{
    // Medlemmsvariabler
    string name;
    int age;
    string race;

};
// Definiera en funktion;
void hunden(Dog hund);
int main()
{
    // Deklaration av Dog
    Dog myDog;
    cin >> myDog.name;
    cin >> myDog.race;
    cin >> myDog.age;

    // Funktionen anropas
    hunden(myDog);



    return 0;
}

void hunden(Dog hund)
{
    cout << "Hunden heter " << hund.name << ", är en " << hund.race <<" och är " << hund.age << " år gammal" << endl;
}

