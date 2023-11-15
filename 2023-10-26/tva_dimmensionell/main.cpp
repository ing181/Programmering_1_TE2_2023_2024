#include <iostream>
using namespace std;
int main()
{
    // Tvådimensionell array
    char matris[5][5]={{'a','b','c','d','e'},
                        {'f','g','h','i','j'},
                        {'k','l','m','n','o'},
                        {'p','q','r','s','t'},
                        {'u','v','x','y','z'}};

      for (int i=0; i<5; i++){

            for (int j=0; j<5; j++){
               cout << matris[i][j] << ' ';

            }

            cout << endl;
      }
 cout << endl;
cout << matris[2][2] << endl;

    return 0;
}
