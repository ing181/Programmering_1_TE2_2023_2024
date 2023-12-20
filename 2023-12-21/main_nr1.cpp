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

    // deklarerar en Bil
    Car myCar;

    cout << "Mata in data för din bil" << endl;

  
        cout << endl;
   
        cout << "Brand: ";
        cin >> myCar.brand;
        cout << "Color: ";
        cin >> myCar.color;
        cout << "Fuel: ";
        cin >> myCar.fuel;

        string val;
        cout << "Visa egenskaperna för min bil om färgen är: ";
        cin >> val;

        if (myCar.color==val){

            cout << myCar.brand << endl << myCar.color << endl << myCar.fuel << endl;
        }
       
  
    
    return 0;
}