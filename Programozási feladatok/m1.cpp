#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("matrice.txt");
int main()
{
    int n;
    cin>>n;
    int t[n][n], s[n*n], i, j, a=1, b=n, sz=1;
    for(i=1;i<=n*n;i++)
        cin>>s[i];
    while(sz<=n*n)
    {
        for(j=a;j<=b;j++)
        {
            t[a][j]=s[sz];
            sz++;
        }
        for(i=a+1;i<=b;i++)
        {
            t[i][b]=s[sz];
            sz++;
        }
        for(j=b-1;j>=a;j--)
        {
            t[b][j]=s[sz];
            sz++;
        }
        for(i=b-1;i>=a+1;i--)
        {
            t[i][a]=s[sz];
            sz++;
        }
        a++;
        b--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            fout<<t[i][j]<<" ";
        fout<<endl;
    }
}
