#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1252");
    string namn;
    int age;
      cout << "Skriv in din ålder ";
      cin >> age;
      cout << "Du är " << age << " gammal" << endl;

      cout << "Skriv in ditt namn ";

    // Bryter efter första blanka tecken
   // cin >> namn;
   // cout << "Ditt namn är " << namn << endl;

    // letar i tangentbordsbufferten 256 tecken efter nyradstecknet
    // och tar bort det
    cin.ignore(256,'\n');

   // Bryter efter nyradstecken
   getline(cin,namn);
   cout << namn << endl;




    return 0;
}

