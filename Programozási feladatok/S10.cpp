#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
ifstream fin("in.txt");

int main()
{
    int i;
    char s[200],t[200],m[11]="aeiouAEIOU";
    fin.getline(s,200);
    i=0;
    while(i<strlen(s)){
        if(strchr(m,s[i])!=NULL)
        {
            strcpy(t,s+i+1);
            strcpy(s+i+1,s+strlen(s));
            s[i+1]='p';
            s[i+2]=s[i];
            s[i+3]='\0';
            strcat(s,t);
            i=i+3;

        }
        else  i++;
    }
   cout<<s;
}
