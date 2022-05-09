#include <iostream>
#include <fstream>

using namespace std;
ofstream fout ("fibo.txt");

int main()
{
    int a,b,f0,f1,f2;
    cout<<"Kerem a kisebb szamot!";
    cin>>a;
    cout<<"Kerem a nagyobb szamot!";
    cin>>b;
    f0=1;
    f1=1;
    f2=f0+f1;
    while (f2>=a and f2<=b)
    {
        f2=f0+f1;
        f0=f1;
        f1=f2;
        {
            if(f2>=a and f2<=b)
           fout<<f2<<",";
        }
   }

}
