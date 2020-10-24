#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);
      ll n;
      while(scanf("%lld",&n)!=EOF)
      {
          ll r=7;
         // cin>>n;
          if(n==1) {
                cout<<1LL<<endl;
          continue;
          }
          if(n==3)
          {
              cout<<15<<endl;
              continue;
          }

          else
          {

              for(ll i=10,j=5;j<=n;j+=2,i+=4)
              {
                  r+=i;
                  //r+=7;
              }
          }
          cout<<(r+(r-2)+(r-4))<<endl;
      }
}
