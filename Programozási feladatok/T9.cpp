#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("vector.in");

int main()
{
    int n, t[100],l,maxi=0,k,q,x,y,i,j,ok=0,r=0;
    fin >> n;
    for (i=1; i<=n; i++)
        fin >> t[i];
    i=1;
    while (i<=n)
        {
            for(j=i;j<=n; j++)
            {
                if (t[i]==t[j])
                    l=j;
            }
            if (l>0)
            {
                k=i;
                q=l;
                while (k<q)
                {
                    if (t[k]==t[q] && ok==0)
                    {
                        r++;
                    }
                    else
                        ok=1;
                    k++;
                    q--;
                }
            if (ok==0)
                if (r>maxi)
                {
                    maxi=r;
                    x=i;
                    y=l;
                }
            }
            r=0;
            i++;
            ok=0;
        }
        for (i=x; i<=y; i++)
            cout << t[i] << " ";
}
