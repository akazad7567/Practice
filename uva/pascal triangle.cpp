#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
vector<ll>x;
ll solve(ll a){

if(a==1) return 1;
ll b;
for(int i=0;i<x.size();i++)
{
    if(a==x[i]) return 3*solve(a/2);


    if(a&x[i])
    {
        b=x[i];

        break;
    }
}

return solve(b)+2*solve(a-b);
}

void init()
{
   // int j=0;
    for(int i=60;i>=0;i--){
        x.push_back(1LL<<i);

        //j++;
    }

}
int main()
{
   ll a,b;
   init();
   while(scanf("%llu %llu",&a,&b))
   {
     if(a==0 and b==0) break;
      ll ans=solve(b+1);
         if(a>0) ans-=solve(a);
         printf("%llu\n",ans);
   }

return 0;



}



