#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef double LL;
LL cn=0;
LL sum(LL m)
{
    LL x,y,z;
    for(int i=0;i<=m;i++){
        for(int j=i;j<=m;j++){
    for(int k=j;k<=m;k++){
     if(i*i+j*j==k*k)
        {

            cn++;


    }
    }
        }
    }
    return cn;
}
int main()
{
    LL m,n;


    while(cin>>m>>n and m+n)
    {
        LL result=0,s=0;
         result=sum(m);
         //cout<<result<<endl;
      for(int j=3;j<=n;j++)
      {

         result+=m+1;

      }
      cout<<result<<"\n";
      cn=0,s=0;
    }
}
