#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("vecini.txt");

int main()
{int i,n,j,t[100][100];
fin>>n;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        fin>>t[i][j];
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(t[i-1][j]%2!=0 && t[i][j-1]%2!=0 && t[i+1][j]%2!=0 && t[i][j+1]%2!=0 && t[i-1][j-1]%2!=0 && t[i-1][j+1]%2!=0 && t[i+1][j-1]%2!=0 && t[i+1][j+1]%2!=0 )
            cout<<"x: "<<i<<" ; y: "<<j<<endl;
    return 0;
}
