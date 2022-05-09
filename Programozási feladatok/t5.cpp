#include <iostream>
#include <fstream>

using namespace std;
ofstream fout("multime");

int main()
{
    int n,a[100],m,b[100],i,j,k,c[100],l;
    bool ok=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[1]==a[n])
            ok=false;
    }
    cin>>m;
    for(j=1; j<=m; j++)
    {
        cin>>b[j];
        if(b[1]==b[m])
            ok=false;
    }
    i=0;
    j=0;
    k=0;
    if(ok==false)
        fout<<"X-nu e multime";
    else
    {
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
                k++;
            }
            else
                c[k++]=b[j++];
        }
        if(i<n)
            for(l=i; l<n; l++)
                c[k++]=a[l];
        else
            for(l=j; l<m; l++)
                c[k++]=b[l];
        for(i=0; i<k; i++)
            fout<<c[i]<<" ";
    }
    return 0;
}
