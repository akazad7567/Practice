#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
vector<ll>x;
ll solve(ll a){

if(a==1) return 1;
ll b;
for(int i=0;i<x.size();i++)
{
    if(a==x[i]) return 3*solve(a/2);//eta 2^n number row er jonno odd number ber krbe
   // ll c=a&x[i]; //binary number system a >shoman sonkhok digit er 2 ta value add krle always 1 return krbe(jekhane ektar value always 2^n hoy example 101&100=true);

    if(a&x[i])
    {
        b=x[i];//a!=2^n hle nearest 2^n er value b te assign krbe

        break;
    }
}

return solve(b)+2*solve(a-b);//left side always 2^n er jonno odd number return krbe and right side 2^n er nearest value er jonno .....
}

void init()
{
   // int j=0;
    for(int i=60;i>=0;i--){
        x.push_back(1LL<<i);//2^n er binary x er moddhe assign krbe
        //cout<<x[j]<<endl;
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

