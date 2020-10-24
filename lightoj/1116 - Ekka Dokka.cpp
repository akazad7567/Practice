#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Find(ll n)
{
    ll tmp=n;
  for(ll i=2LL;i<=min(10000LL,tmp);i++)
  {
      while(n)
      {
          if(n%i!=0LL) break;
//          cout<<n%i<<endl;
          n/=i;
//          cout<<n<<' '<<i<<endl;
          if(!(n&1LL) and i&1LL)
          {
//              cout<<"1st= "<<n<<' '<<i<<endl;
              return i;
          }
          if(n&1LL and !(i&1LL))
          {
//              cout<<"2nd= "<<n<<' '<<i<<endl;
              return n;
          }
      }
  }
  return 0LL;
}
int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        ll n,b;
        scanf("%lld",&n);
        ll a=Find(n);
//        cout<<a<<endl;
        if(a)
        b=n/a;
//        cout<<b<<endl;
        if(a){
        if(!(a&1)) swap(a,b);
        printf("Case %d: %lld %lld\n",tks,a,b);
        }
        else printf("Case %d: Impossible\n",tks);
    }
}
