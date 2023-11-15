#include <iostream>
using namespace std;
int main()
{
    system("chcp 1252");

    // break och continue
/*
    for(int i=10; i>0; i--)
    {
        continue;
        if (i==5){
            cout << i << " hoppas över" << endl;
           // continue;
           break;
        }
        cout << i << endl;
    }
*/
    int j=10;
    while (j>0){


        if (j==5){
              continue;
           // break;
        }
        cout << j << endl;
        j--;
    }
    return 0;
}
