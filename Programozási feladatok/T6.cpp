#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("interval.txt");

int main()
{
    int n, a, b,maxi=0,x,y,c,p=0;
    fin>>n;
    while(n>0)
    {
        fin>>a>>b;
        c=b;
        while (b>=a)
        {
            b--;
            p++;
        }
        if (p>maxi)
        {
            maxi=p;
            x=a;
            y=c;
        }
        if (maxi==p)
        {
            if (a<x)
            {
                x=a;
                y=c;
            }
        }
        n--;
        p=0;
    }
    cout<<x<<" "<<y;
}
