#include <iostream>

using namespace std;

int main()
{
    int szam,szj,szjt[100],i,k=1;
    bool hegyvolgy;
    hegyvolgy=true;
    cin>>szam;
    while(szam!=0)
    {
        szjt[szj]=szam%10;
        szam=szam/10; // szamjegyrebontom
        szj++;        // megszamolom a szamjegyek szamat
    }
    while(szjt[k]<=szjt[k+1])  // ha az elso szam kisebb mint a masodik
        k++;     // novelem a k valtozot
    if(k==1)     // ha a k erteke 1 tehat a k alaperteke akkor azt jelenti hogy az elso szam nem kisebb mint a masodik
        hegyvolgy=false; // nem hegy volgy szam
    else
    {
        for(i=k;i<szj;i++)  // kezdem a szam bejarasat a kozepetol a vegeig,
            if(szjt[i]<szjt[i+1]) // ha a kozepso szam kisebb mint az utana kovetkezo akkor nem hegy volgy szam
                hegyvolgy=false;
    }
    if(hegyvolgy==true)
        cout<<"hegyvolgy szam";
    else
        cout<<"nem hegy volgy szam";
}
