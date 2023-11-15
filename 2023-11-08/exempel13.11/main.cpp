#include <iostream>

using namespace std;

int main()
{
   /*
   int temp[5];
   temp[0]=17;
   temp[1]=-65;
   temp[2]=-20;
   temp[3]=9;
   temp[4]=42;

   int summa=0;
   for(int i=0; i<5; i=i+1){
   // summa += temp[i];
      summa = summa+temp[i];
   }
   cout << "Medeltemperaturen är " << summa/5;
   */
    int a=5;
    int b=7;
    int heltal = b/a;
    int rest = b%a; // Resten vid heltalsdivision
    cout << heltal << " och "  << rest << "/" << b << endl;

    float fa=5;
    float fb=7;

    float kvot = fb/fa;

    cout << "Vid beräkning med flyttal " << kvot << endl;

    return 0;
}
