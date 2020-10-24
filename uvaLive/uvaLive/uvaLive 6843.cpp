#include<bits/stdc++.h>
using namespace std;

vector<bool>v(900000010);
int sum=0;
int a[30010];
int main()
{


   for(int i=0;i<=30000;i++){


    for(int j=0;j<=i;j++)
    {
        if(!v[i*j])
        {
            v[i*j]=1;
            sum++;
        }


    }
    a[i]=sum;
   }
   int T;
   scanf("%d",&T);
   while(T--)
   {
       int n;
       scanf("%d",&n);
       printf("%d\n",a[n]);
   }
   return 0;

}
