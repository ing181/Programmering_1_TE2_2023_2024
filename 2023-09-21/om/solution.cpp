#include <iostream>
using namespace std;
/* Förutsättningar
Alla yngre än 7 år betalar 35 kr.
Alla över 65år betalar 35 kr.
Alla andra betalar 55 kr.
*/

int main() {
  system("chcp 1252");  //Svenska tecken
  int age;
  cout << "Hur gammal är du? ";
  cin >> age;

  int kostnad;

  // metod 1

  if (age < 7) {
    kostnad = 35;
  } else if (age > 65) {
    kostnad = 35;
  } else {
    kostnad = 55;
  }
  cout << "metod 1: " << kostnad << " kr" << endl;

  // metod 2

  if (age > 7) {

    if (age > 65) {
      kostnad = 35;
    } else {
      kostnad = 55;
    }

  } else {
    kostnad = 35;

  }

  cout << "metod 2: " << kostnad << " kr" << endl;

  // metod 3
  // Vi använder de logiska operatorerna
  // && = and
  // || = or
  // "Om kostnad är större än 65 eller kostnad är mindre än 7"
  if ((age > 65) || (age < 7)) {
    kostnad = 35;
  } else {
    kostnad = 55;

  }

  // metod 4
  cout << "metod 3: " << kostnad << " kr" << endl;

  // "Om kostnad är mindre än 65 och me än 7"
  if ((age < 65) && (age > 7)) {
    kostnad = 55;
  } else {
    kostnad = 35;

  }

  cout << "metod 4: " << kostnad << " kr" << endl;

  return 0;

}
