#include <iostream>
using namespace std;
// FUNKTIONER, KAP. 12, SIDAN 95
// Funtionsdefinition
// utv�rde_datatyp namn(inv�rde_datatyp, inv�rde_datatyp, ...);
// EX 12.5 sid 103
//int test(int a);
// Konverterar celsius till fahrenheit
int celsiustofahrenheit(int celsius);
int main()
{
    // namn(inv�rde1, inv�rde) // Funktionsanrop
    //cout << test(2) << endl;
    ////int tal = test(2);

    //cout << tal << endl;
   cout << celsiustofahrenheit(20) << endl;
    return 0;
}
/*
int test(int a){
    return a+1;

}
*/
int celsiustofahrenheit(int celsius)
{
    int fahrenheit = ((celsius * 9) / 5 + 32);
    return fahrenheit;
}
// funktionsdefinition
// utv�rde_datatyp namn(inv�rde_datatyp, inv�rde_datatyp)
//{
   // kod...
   // return utv�rde_datatyp

//}


