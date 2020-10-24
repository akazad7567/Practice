#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // freopen("out.txt","w",stdout);
    ll n,k;

    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
       ll r1=0,r2=0,r3=0;
       r1=n+(n/k);
       r2=(n/k)+(n%k);
       while(r2>=k)
       {
           r1+=r2/k;
           r2=(r2/k)+(r2%k);
       }
       cout<<r1<<endl;
   }
}

