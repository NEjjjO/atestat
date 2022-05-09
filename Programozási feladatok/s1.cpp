#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream fin("adat.be");
ofstream fout("adat.ki");

int main()
{
    char s[21],t[21][21],seged[21];
    int i=0,j=0,poz,a[21]= {0};
    bool ok=true;
    while(fin>>s)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(strchr("aeiouAEIOU",s[i])!=NULL) //magánhangzó számolás
            {
                a[j]++; //magánhangzós tomb
            }
            strcpy(t[j],s);
        }
        j++;
    }
    poz=j; //elemek száma
    for(i=0; i<poz; i++)
        fout<<t[i]<<endl;
    fout<<endl;

    do
    {
        ok=true;
        for(i=0; i<poz-1; i++)
            if(a[i]>a[i+1])
            {
                strcpy(seged,t[i]);
                strcpy(t[i],t[i+1]);
                strcpy(t[i+1],seged);
                ok=false;
            }
    }
    while(ok==false);
    for(i=0; i<poz; i++)
        fout<<t[i]<<endl;
    return 0;
}
