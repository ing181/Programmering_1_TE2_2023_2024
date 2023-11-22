#include <iostream>

using namespace std;
const unsigned int LIMIT=100;
bool isPrimeNumber(unsigned long long int &number);
int main()
{
    unsigned long long int i=1;
    int storlek;
    while (i<LIMIT){
       if (isPrimeNumber(i)) {
        storlek++;

       }
        i++;
    }
    cout << storlek << endl;
    int *arr = new int[storlek];
    return 0;
}
bool isPrimeNumber(unsigned long long int &number)
{

      for(unsigned long long int i = 2; i < number; i++)
      {
        if(number % i == 0)
        {
            return false;
        }
      }
      return true;
}
