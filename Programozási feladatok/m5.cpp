#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.in");

int main()
{
    int n,m,i,j;
    fin>>n>>m;  // beolvassuk a sorok illetve oszlopok sz�m�t
    int t[n][m];
    int eredmeny[m][n];   //deklar�lunk egy eredm�ny t�mb�t

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)  //beolvassuk az eredeti t�mb�t
            fin>>t[i][j];

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)               // eredmeny[oszlopok sz�ma  -1 (mert 0t�l ind�tottam)  -  j][i] = t[i][j]
            eredmeny[m-1-j][i]=t[i][j];


    for(i=0; i<m; i++)
    {
        cout<<endl;
        for(j=0; j<n; j++)                  // �j t�mb ki�rat�sa
            cout<<eredmeny[i][j]<<" ";
    }
}
