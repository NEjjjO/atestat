#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>

using namespace std;

ofstream fout("vocale.tx");

int main()
{
	string szoveg; 
	string finalSzoveg = ""; // Veszunk egy masik karakterlancot
	char maganhangzok[10] = "aeiou"; // Itt taroljuk a maganhangzokat.
	cin >> szoveg;

	int i = 0;

	int n = szoveg.length(); // n-ben lementjuk a karakterlanc hosszat.
	for(int i=0;i<n;i++)
	{
		finalSzoveg += szoveg[i];


		if (strchr(maganhangzok, szoveg[i]) != 0) {  //Osszehasonlitsuk, hogy maganhangzo-e

			finalSzoveg += szoveg[i] - 32;   // Beletesszuk az elso karakterlancbol a karaktereket, ha a karakter maganhangzo akkor be tesszuk utana a nagy valtozatat is.
			 
		}
		
		
	}


	cout << finalSzoveg;
  
	return 0;
}

