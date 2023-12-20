#include <iostream>
#include <string>
using namespace std;

struct Car
{
    // medlemsvarialer
    string brand;
    string color;
    string fuel;

};
int main()
{

    // deklarerar en array med Bil
    Car myCar[3];

    cout << "Mata in data för 3 bilar" << endl;

    for (int i=0; i<3; i++) {
        cout << endl;
        cout << "Car number " << i+1 << endl;
        cout << "Brand: ";
        cin >> myCar[i].brand;
        cout << "Color: ";
        cin >> myCar[i].color;
        cout << "Fuel: ";
        cin >> myCar[i].fuel;

    }
    int val;
    do {
        cout << endl;
        // Välj vilkoret
        cout << "Visa bilar som uppfyller vilkoret" << endl;
        cout << "AVSLUTA, select 0" << endl;
        cout << "Brand, selekt 1  " << endl;
        cout << "Color, selekt 2  " << endl;
        cout << "Fuel, selekt 3   " << endl;

        cin >> val;
        string preference;
        switch (val) {

            case 1: // Brand

            cout << "Select brand: ";
            cin >> preference;

            for (int i=0; i<3; i++) {
                if (myCar[i].brand==preference) {

                    cout << "Brand: " << myCar[i].brand << endl;
                    cout << "Color: " << myCar[i].color << endl;
                    cout << "Fuel:  " << myCar[i].fuel << endl;
                    cout << endl;
                }

            }

            case 2: // Color

            cout << "Select Color: ";
            cin >> preference;

            for (int i=0; i<3; i++) {
                if (myCar[i].color==preference) {

                    cout << "Brand: " << myCar[i].brand << endl;
                    cout << "Color: " << myCar[i].color << endl;
                    cout << "Fuel:  " << myCar[i].fuel << endl;
                    cout << endl;
                }

            }

            case 3: // Fuel

            cout << "Select Fuel: ";
            cin >> preference;

            for (int i=0; i<3; i++) {
                if (myCar[i].fuel==preference) {

                    cout << "Brand: " << myCar[i].brand << endl;
                    cout << "Color: " << myCar[i].color << endl;
                    cout << "Fuel:  " << myCar[i].fuel << endl;
                    cout << endl;
                }

            }
        }

        } while (val!=0);

    return 0;
}
