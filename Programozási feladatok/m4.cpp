#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maxim.txt");

int main()
{
    int t[100][100], n, m, i, j, maxi=0, maxii=0, maxij=0, p;

    cout << "N = " ;
    fin >> n;
    cout << n << endl << "M = ";
    fin >> m;
    cout << m << endl;

    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            fin >> t[i][j];
    cout << endl << "A matrix:" << endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    for(i=1; i<=n; i++)         // a tömb legnagyobb elemének és koordinátáinak meghatározása
        for(j=1; j<=m; j++)
            if(t[i][j]>maxi){
                maxi=t[i][j];
                maxii=i;
                maxij=j;
            }
    cout << endl << "A matrix legnagyobb eleme: " << maxi << ", koordinatai: i=" << maxii <<", j=" << maxij << endl;

    for(i=1; i<=n; i++)
        for (j=1; j<=m; j++)
            if(j==maxij)
                t[i][j]=t[i][j+1];  // maxi-hoz tartozó oszlop törlése
    m--;
    for(i=1; i<=n; i++)
        for (j=1; j<=m; j++)
            if(i==maxii)
                t[i][j]=t[i+1][j];  // maxi-hoz tartozó sor törlése
    n--;

    cout << endl << "A matrix modositva:" << endl; // a módosított mátrix kiírása
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
