#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("matrice.in");

int main()
{
    int n,m,i,j,maxi=0,k=0,t[100][100];
    fin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            fin>>t[i][j];
    for(j=1;i<=m;j++)
        if(t[1][j]>maxi)
            maxi=t[1][j];
    for(j=1;i<=m;j++)
        if(t[n][j]>maxi)
            maxi=t[i][j];
    for(i=1;i<=n;i++)
        if(t[i][1]>maxi)
            maxi=t[i][1];
    for(i=1;i<=n;i++)
        if(t[i][m]>maxi)
            maxi=t[i][m];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(t[i][j]==maxi)
                k++;
    cout<<"maximum elem:"<<maxi<<endl;
    cout<<"elofordulasanak szama:"<<k;

}
