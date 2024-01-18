#include <iostream>
using namespace std;
void meny();
int main()
{
    meny();
    return 0;
}
void meny()
{
    int val;
    do {
    cout << "*********************\n";
    cout << "Avsluta (0)\n";
    cout << "Alternativ 1 (1)\n";
    cout << "Alternativ 2 (2)\n";
    cout << "**********************************\n";
    cin >> val;
    } while(val != 0);

}
