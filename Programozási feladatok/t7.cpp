#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifre.txt");

int main()
{   int i,n,t[1001],a,b,c;
    fin>>n;
    for(i=1;i<=n;i++)
       fin>>t[i];
    for(i=1;i<=n;i++)
   {
       if(t[i]>=100&&t[i]<=999)
       {
            a=t[i]/100;
            b=(t[i]/10)%10;
            c=t[i]%10;
            if(a!=b&&a!=c&&b!=c)
                cout<<t[i]<<" ";
       }
   }
}
