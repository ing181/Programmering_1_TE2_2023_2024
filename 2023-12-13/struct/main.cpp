#include <iostream>
using namespace std;
struct Person {
    int age;
    string name;

};
int main()
{
    system("chcp 1252");

    // Deklarerar en k�nd datatyp
    int tal;
    // Deklarerar en egendiffinuerad
    /*
    Person person;
    cout << "Vad heter du? ";
    cin >> person.name;
    cout << "Hur gammal �r du? ";
    cin >> person.age;

    cout << "Du heter " << person.name << " och �r " << person.age << " �r gammal" << endl;
   */
    Person person2[3];

    for (int i=0; i<3; i++) {
        cout << "Vad heter du? ";
        cin >> person2[i].name;
        cout << "Hur gammal �r du? ";
        cin >> person2[i].age;

    }

        for (int i=0; i<3; i++) {
    cout << "Du heter " << person2[i].name << " och �r " << person2[i].age << " �r gammal" << endl;;
    }



    return 0;
}
