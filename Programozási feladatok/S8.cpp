#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("text.in");

int main()
{
    int n,i,p=0,k=0;
    char s[100];
    fin >> n;
    while (n>0)
    {
        fin >> s;
        for (i=0; i<strlen(s); i++)
        {
            if (strchr("aeiou",s[i])!=0)
                p++;
            if (strchr("aeiou",s[i])==0)
                k++;
        }
        if (p==k)
            cout << s << endl;
        n--;
        p=0;
        k=0;
    }

}
