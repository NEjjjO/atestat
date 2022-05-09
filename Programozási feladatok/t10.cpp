#include <iostream>
#include <fstream>

using namespace std;
ofstream fout ("aparitii.out");

int main()
{
    int n,i;
    cin>>n;
    int t[n+1], a[n+1], b[11]={0};
    for(i=1;i<=n;i++)
        cin>>t[i];

    for (i=1;i<=n;i++)
    b[t[i]]++;

    for (i=1;i<=n;i++)
        a[i]=b[t[i]];

    for (i=1;i<=n;i++)
        fout<<a[i]<<" ";
}
