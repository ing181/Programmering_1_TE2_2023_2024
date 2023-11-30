#include <iostream>
using namespace std;
int main()
{
    // TRE MÖJLIGA LÖSNINGAR

    int arr[6]={8,-4,66,9,3,6};

    int tmp = arr[0];
                      // i=i+1
    for (int i=1; i<6; i++)
    {
        if (arr[i]>tmp)
        {
            tmp=arr[i];
        }
    }
    cout << tmp << endl;

    /*
    The sizeof is a keyword, but it is a compile-time operator that determines the size, in bytes, of a variable or data type.
    The sizeof operator can be used to get the size of classes, structures, unions and any other user defined data type.
    The syntax of using sizeof is as follows − sizeof (data type)
    storlek uttryckt i antalet Bytes, 1 Byte = 8 bitar (och en bit kan ha värdet 0 eller 1)
    */
    int antal=sizeof(arr)/sizeof(arr[0]); // 48/8 vilket blir 6
    tmp = arr[0];
                      // i=i+1
    for (int i=1; i<antal; i++)
    {
        if (arr[i]>tmp)
        {
            tmp=arr[i];
        }
    }
      cout << tmp << endl;

      tmp = arr[0];
      // auto blir int, kompilatorn förstår att arr består av int
      // möjligt skrivsett
      //  for (int i : arr)
      for (auto i : arr)
      {
        if (i>tmp)
        {
            tmp=i;
        }

      }
      cout << tmp << endl;
    return 0;
}
