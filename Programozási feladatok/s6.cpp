#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
ifstream fin("litere.txt");

int main()
{
    char s[226],t[226],s1[40];
    char *p;
    int i,sz=0;
    fin.getline(s,226);
    cout<<s<<endl;
    p=strtok(s," ");
    while(p!=0)
    {
        strcpy(s1,p);
        s1[0]=s1[0]-32;
        s1[strlen(s1)-1]=s1[strlen(s1)-1]-32;
        strcat(t,s1);
        strcat(t," ");
        p=strtok(NULL," ");
    }
    cout<<t;
}

