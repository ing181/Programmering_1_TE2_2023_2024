#include <iostream>
using namespace std;

int main()
{
    // en array med 5 st. char
    char tecken[5];
    cin.get(tecken, 3);  // V�ntar p� anv�ndarens inmatning
    // antag att anv�ndaren matar in abcdef
    cout << tecken << endl; // Utskriften blir ab
    // Varf�r?
    // sin.get(tecken 3); anger att 3 hamnar i variabeln
    // Vilka tre tecken?
    // ab och '\0'
    // Vad anv�nds '\0' till?
    // cout matar ut det som finns i tecken
    // tills den kommer till f�rsta '\0' (nolltecken)
    // Man skiljer p�
    // C-str�ngar, igentligen arrayer av char
    // och std::string
    // vi har inte g�tt igenom C-str�ngar.
    // F�r att f�r�nkla anv�ndadet av dessa C-str�ngar s�
    // l�ggs '\0' till i slutet av varge str�ng.
    // n�r man anv�nder cin.get() funktionen
    // Din fr�ga: cin.get();
    // utan argument, tomt mellan ()
    // kan anv�nd f�r att programmet ska stanna upp.
     cin.get(); // Om du provar s� m�rker du att programmet stannar
     // p� rad 28
     cout << "Hej!" << endl; // syns n�r du tryckt Enter (Retur)

    return 0;
}
