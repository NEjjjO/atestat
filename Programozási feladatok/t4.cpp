#include <iostream>
#include <fstream>


using namespace std;

ofstream fout("ordonata.txt");
int main()
{
   int n,m,i,j,k,ok=1;


   cin>>n;
   cin>>m;
   int t[n];
   int v[m];
   int o[n+m];
   for(i=0;i<n;i++){
    cin>>t[i];
   }
   for(i=0;i<m;i++){
    cin>>v[i];
   }
  i=0;j=0;k=0;
  while(i<n and j<m){
    if(t[i]<v[j]){
       o[k]=t[i];
       i++;
       k++;
    }
    else {
      o[k]=v[j];
      k++;
      j++;
    }
   }
  while(i<n){
    o[k]=t[i];
    k++;
    i++;
  }
  while(j<m){
    o[k]=v[j];
    k++;
    j++;
  }
   for(i=0;i<n+m;i++){
     fout<<o[i]<<" ";
   }



    return 0;
}
