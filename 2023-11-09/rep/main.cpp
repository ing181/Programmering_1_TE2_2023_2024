#include <iostream>
using namespace std;
// Om variblers r�ckvidd (var de finns)
// Global variabel
const float PI=3.141592;
int main()
{
    // FEL!
    // Alla variabler, alla
    // arrayer m�ste finnas
    // och dimensionerats
    // vi kompileringen.
    //int antal;
    //cout << "Hur m�nga platser i arrayen?";
    //cin >> antal;
    //int arr[antal];

    // Alla variabler m�ste skapas
    // n�r programmet kompileras
    //int arr[]={1,2,3};

    // Repetition arrayer
   // int  arr[1000];
    //  int arr1
    //  int arr2...

    int arr[10];
    for (int i=0; i<10; i++){

        arr[i] = (23+i);
    }
     cout << arr[2] << endl;
    return 0;
}


