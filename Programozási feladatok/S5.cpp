#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("sufix_prefix.txt");

int main()
{int y,i,j;
char s[50],z[50],sc[50];
fin.getline(s,50);
fin.getline(s,50);
while(s[i]!=' ')
{
    i++;
}
while(z[j]!=' ')
{
    j++;
}
for(y=i;y<=0;y--)
{   strcat(sc,s[y]);
    cout<<sc<<endl;}
while(j!=0)
{
    for(y=0;y<j;y++)
        cout<<z[y];
    j--;
    cout<<endl;
}
    return 0;
}
