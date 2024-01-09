// Preprocc
#include <iostream>
#define PI 3.14159265359 // flyttal
#define JAG_HETER "Ingemar Per Axel" // textsträng
using namespace std;
int main()
{
    cout << "Hello world!" << endl;
    // exempel macro
    cout << __FILE__ << endl;
    cout << __LINE__ << endl;
    cout << __cplusplus << endl;

    cout << PI << endl;
    cout << JAG_HETER << endl;

    return 0;
}
