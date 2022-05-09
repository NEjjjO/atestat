#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.in");

int main()
{
    int n,m,i,j;
    fin>>n>>m;  // beolvassuk a sorok illetve oszlopok számát
    int t[n][m];
    int eredmeny[m][n];   //deklarálunk egy eredmény tömböt

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)  //beolvassuk az eredeti tömböt
            fin>>t[i][j];

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)               // eredmeny[oszlopok száma  -1 (mert 0tól indítottam)  -  j][i] = t[i][j]
            eredmeny[m-1-j][i]=t[i][j];


    for(i=0; i<m; i++)
    {
        cout<<endl;
        for(j=0; j<n; j++)                  // új tömb kiíratása
            cout<<eredmeny[i][j]<<" ";
    }
}
