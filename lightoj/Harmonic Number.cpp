#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 100000001
double ar[1000050];
double eps=1e-9;
void ini()
{
    double ans=0;
    for(int i=1;i<M;i++)
    {
        ans+=(1.0/(double)i);
        if(i%100==0) ar[i/100]=ans;
    }
}

int main()
{
   ini();
   int t,tks=0;
   scanf("%d",&t);
   while(t--)
   {
       int n;
       scanf("%d",&n);
       double ans=ar[n/100];
       cout<<ans<<endl;
       for(int i=(n/100)*100+1;i<=n;i++)
       {
           ans+=(1.0/(double)i);
       }


       printf("Case %d: %.10f\n",++tks,ans+eps);
   }
}
//90000000
