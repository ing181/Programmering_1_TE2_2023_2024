#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    /*
    // Skapa och tilldela
    // därefter värden
    int temp[5];
    temp[0]=17;
    temp[1]=-65;
    temp[2]=-20;
    temp[3]=9;
    temp[4]=42;
    */
    // Skapa och tilldela värden
    // samtidigt
    int temp[5]={17,-65,-20,9,42};

   // cout << (temp[0]+temp[1]+temp[2]+temp[3]+temp[4]) / 5 << endl;
    int summa=0;
    for(int i=0; i<10; i++){
     //  summa = summa + temp[i];
      cout << "Index " << i << " har värdet " << temp[i]<<endl;
    }



    return 0;
}
