
/* L�s f�ljande problem med
1. else-if
och
2. n�stlad if-sats

"Om du �r yngre �n 15 �r s� kostar intr�det 15 kr.
Om du �r mellan 15 �r och upp till och med 64 �r kostar intr�det 30 kr.
om du �r �ldre �n 64 kostar intr�det 5 kr.

*/


#include <iostream>
using namespace std;
int main()
{   system("chcp 1252");
    system("timeout /t 2");
    cout << "Ange din �lder, j�mna �r ";
    int age;
    cin >> age;
// else-if
if (age<15){
    cout << "Det kostar 15 kronor" << endl;
// varf�r "else if" och inte endast "if"?
} else if (age>64){
    cout << "Det kostar 5 kronor" << endl;
} else {
    cout << "Det kostar 30 kronor" << endl;
}
// V�ntar i 2 sekunder
system("timeout /t 2");
// n�stlad if-sata
cout << endl;

if (age<64) {
    if (age<15) {
       cout << "Det kostar 15 kronor" << endl;
       }
      else {
           cout << "Det kostar 30 kronor" << endl;
       }
 } else {
           cout << "Det kostar 5 kronor" << endl;

}

// B�de "(1==1)" och "(1==2)"
// m�ste vara true
if ( (1==1) && (1==2) ){

}

// En, eller b�da, av "(1==1)" och "(1==2)"
// m�ste vara true
if ( (1==1) || (1==2) ){

}




    return 0;
}
