#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    char c1, c2, text[250];

    cout << "Karakter 1: ";
    cin >> c1;

    cout << endl << "Karakter 2: ";
    cin >> c2;

    cout << endl << "Irjon be egy szoveget (Nyomjon #-ot a befejezeshez): ";
    cin.getline (text, 250, '#');	//# - limiter

    cout << "\nEntered details are:\n";
    cout << "Karakter 1: " << c1 << endl;
    cout << "Karakter 2: " << c2 << endl;
    cout << "Szoveg: " << text << endl;

    for(int i=1; i<=strlen(text); i++){
        if(text[i]==c1){
            text[i]=c2;
        }else if(text[i]==c2){
            text[i]=c1;
        }
    }
    cout << endl << "Modositott szoveg: " << text << endl;
    return 0;
}
