
/* Lös följande problem med
1. else-if
och
2. nästlad if-sats

"Om du är yngre än 15 år så kostar inträdet 15 kr.
Om du är mellan 15 år och upp till och med 64 år kostar inträdet 30 kr.
om du är äldre än 64 kostar inträdet 5 kr.

*/


#include <iostream>
using namespace std;
int main()
{   system("chcp 1252");
    system("timeout /t 2");
    cout << "Ange din ålder, jämna år ";
    int age;
    cin >> age;
// else-if
if (age<15){
    cout << "Det kostar 15 kronor" << endl;
// varför "else if" och inte endast "if"?
} else if (age>64){
    cout << "Det kostar 5 kronor" << endl;
} else {
    cout << "Det kostar 30 kronor" << endl;
}
// Väntar i 2 sekunder
system("timeout /t 2");
// nästlad if-sata
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

// Både "(1==1)" och "(1==2)"
// måste vara true
if ( (1==1) && (1==2) ){

}

// En, eller båda, av "(1==1)" och "(1==2)"
// måste vara true
if ( (1==1) || (1==2) ){

}




    return 0;
}
