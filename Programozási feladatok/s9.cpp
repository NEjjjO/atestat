#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream fin("string.in");
int main()
{
    int i,k,j=0;
    char s1[101],s2[250];
    fin.getline(s1,101);
    for(i=0; i<strlen(s1); i++)
    {
        if(strchr("aeiouAEIOU",s1[i])!=0)
        {
            k=0;
            while(k<=i)
            {
                s2[j]=s1[i];
                k++;
                j++;
            }
        }
        else
            s2[j++]=s1[i];
    }
    s2[j]='\0';
    cout<<s2;
    return 0;
}
