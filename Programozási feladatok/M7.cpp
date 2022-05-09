#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int matrix[100][100];  
	int x = floor((log10(n)) + 1); // Visszateriti az n szamjegyeinek szamat :)

	int j = 0;
	
	int k = pow(10, x-1); // Egy valtozo, 10-nek a hatvanya, amellyel majd osszuk szamunkat.
	
	


	while (j != x) {
		for (int i = 0; i < x; i++) {

			matrix[i][j] = (n / k)%10; // Itt osszuk a szamot es meg kell egy mod10 (%10) ,hogy az elso szamjegyet adja vissza.

		}
		j++;
		k /= 10;
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}

