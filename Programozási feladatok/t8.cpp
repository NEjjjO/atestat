#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("vector.in");
int prim(int n)
{
    int i,k=0;
    for(i=2; i<sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
int ford(int n)
{
    int uj=0,szj;
    while(n!=0)
    {
        szj=n%10;
        uj=uj*10+szj;
        n=n/10;
    }
    return uj;
}
int main()
{
    int n, t[100],i,j=1,k=0,maxi=0,m,uj=0,kezd=1;
    fin>>n;
    for(i=1; i<=n; i++)
        fin>>t[i];
    i=1;
    while(i<=n)
    {
        m=t[i];
        uj=ford(m);
        if(prim(uj)==1 && prim(m)==1)
            k++;
        else
        {
            if (k>maxi)
            {
                maxi=k;
                kezd=j+1;
            }
            k=0;
            j=i;
        }
        i++;
    }
    cout<<endl;
    for(i=kezd; i<=kezd+maxi-1; i++)
        cout<<t[i]<<" ";
    return 0;
}
