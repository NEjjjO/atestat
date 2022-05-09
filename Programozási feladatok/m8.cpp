#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("matrice.in");

int main()
{
    int m,n,i,j,minim, maxim;
    fin>>n>>m;
    int t[n+1][m+1];
    int a[2][n+1], b[2][m+1];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            fin>>t[i][j];
    for(i=1;i<=n;i++)
    { maxim=t[i][1];
      minim=t[i][1];
            for(j=2;j<=m;j++)
                { if(t[i][j]>maxim)
                maxim=t[i][j];
                if(t[i][j]<minim)
                    minim=t[i][j];}
     a[1][i]=maxim;
     a[2][i]=minim;
    }

     for(j=1;j<=m;j++)
    { maxim=t[1][j];
      minim=t[1][j];
            for(i=2;i<=n;i++)
                { if(t[i][j]>maxim)
                maxim=t[i][j];
                if(t[i][j]<minim)
                    minim=t[i][j];}
     b[1][j]=maxim;
     b[2][j]=minim;
    }
    for (i=1;i<=n;i++)
        for(j=1;j<m;j++)
        if(a[1][i]==b[2][j])
        cout<<a[1][i]<<" ";
    for (i=1;i<=n;i++)
        for(j=1;j<m;j++)
        if(a[2][i]==b[1][j])
        cout<<a[2][i]<<" ";
}
