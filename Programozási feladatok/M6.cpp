#include <iostream>

using namespace std;

int main()
{
    int n,t[100][100],i=0,j=0;
    cin>>n;
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j<=n-1)
                if (i<j)
                    t[i][j]=1+i*2;
                else
                    t[i][j]=1+j*2;
            else
            {
                if (i>=j)
                    t[i][j]=1+(n-1-i)*2;
                else
                    t[i][j]=1+(n-1-j)*2;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
