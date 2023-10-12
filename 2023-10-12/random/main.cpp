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

            x = rand() % 10;  // Första värdet i raden av slumptal
            y = rand() % 10;  // Andra värdet i raden av slumptal

            cout << "x=" << x << " " << "y=" << y << endl;
    }

    return 0;
}
