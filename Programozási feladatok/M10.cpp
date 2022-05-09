#include <iostream>
#include <fstream>

using namespace std;
ofstream fout("rez.txt");

int main()
{
    int n, a[100][100],i,j,p=0;
    cin >> n;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            cin >> a[i][j];
    for (i=1; i<=n ;i++)
    {
            for (j=1; j<=n; j++)
        {
            p=p+a[i][j];
        }
        a[i][i]=p;
        a[i][n+1-i]=p;
        p=0;
    }
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
            fout << a[i][j] << " ";
        fout << endl;
    }
}
