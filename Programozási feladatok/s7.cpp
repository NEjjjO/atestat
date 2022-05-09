#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream fin ("text.in");
int main()
{
    int n,i,k,sz=0;
    fin>>n;
    char s[25],h,m;
    for (i=0;i<n;i++)
        {fin>>s;
        h=s[0];
        k=strlen(s);
        m=s[k-1];
        if (strchr("aAeEiIoOuU",h)!=0 or strchr("aAeEiIoOuU",m)!=0)
            sz++;
        }
   cout<<sz;
}
