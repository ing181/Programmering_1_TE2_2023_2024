#include <iostream>
using namespace std;

int main()
{
    // en array med 5 st. char
    char tecken[5];
    cin.get(tecken, 3);  // Väntar på användarens inmatning
    // antag att användaren matar in abcdef
    cout << tecken << endl; // Utskriften blir ab
    // Varför?
    // sin.get(tecken 3); anger att 3 hamnar i variabeln
    // Vilka tre tecken?
    // ab och '\0'
    // Vad används '\0' till?
    // cout matar ut det som finns i tecken
    // tills den kommer till första '\0' (nolltecken)
    // Man skiljer på
    // C-strängar, igentligen arrayer av char
    // och std::string
    // vi har inte gått igenom C-strängar.
    // För att föränkla användadet av dessa C-strängar så
    // läggs '\0' till i slutet av varge sträng.
    // när man använder cin.get() funktionen
    // Din fråga: cin.get();
    // utan argument, tomt mellan ()
    // kan använd för att programmet ska stanna upp.
     cin.get(); // Om du provar så märker du att programmet stannar
     // på rad 28
     cout << "Hej!" << endl; // syns när du tryckt Enter (Retur)

    return 0;
}
