#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[21];                //eredeti karakterlánc
    char s2[21];                //karakterlánc amely műveleteket fog végezni
    char mgh[6]="aeiou";        //karakterlánc a magánhangzóknak amelyekből 5 van összesen
    bool klon;
    cin.getline(s1,20);         //beolvassuk a karakterláncot
    for(int i=0;i<5;i++)            //inditunk egy for ciklust, amely 5x fog ismetlodni mivel annyi maganhangzo van
    {   klon=false;                         //alapbol azt allitjuk, hogy nem letezik klon
        strcpy(s2,s1);                           //atmasoljuk az eredeti karakterlancot a masodikba
        for(int j=0;j<strlen(s2);j++)
        {
            if(mgh[i]==s2[j])               //hogyha van maganhangzo
            {
                strcpy(s2+j,s2+j+1);            //toroljuk a maganhangzot
                klon=true;              //akkor letezik klon
            }
        }
        if(klon==true)              //hogyha letezik klon akkor kiirjuk, maskepp nem
            cout<<s2<<endl;
    }
    return 0;

}
