#include <iostream>
#include <ctime>
using namespace std;

int main()
{
     srand(time(NULL));
     int x;
     int y;
     int counter;

    while (x!=y)
    {

            x = rand() % 10;  // F�rsta v�rdet i raden av slumptal
            y = rand() % 10;  // Andra v�rdet i raden av slumptal

            cout << "x=" << x << " " << "y=" << y << endl;
    }

    return 0;
}
