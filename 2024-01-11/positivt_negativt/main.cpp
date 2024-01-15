#include <iostream>
using namespace std;
char positivt_negativt(int invarde);
int main()
{
    cout << positivt_negativt(7);
    return 0;
}
char positivt_negativt(int invarde)
{
    if (invarde < 0) {
        return '-';
    }

    return '+';

}
