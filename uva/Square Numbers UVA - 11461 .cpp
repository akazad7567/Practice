#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{

// freopen("out.txt","w",stdout);
    ll a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
         ll cnt=0;
        if (a==0 or b==0)
        {
            return 0;
        }
//        ll r=sqrt(a);
//        if(sqrt(a)==sqrt(b))
//        {
//            cout<<'1'<<endl;
//            continue;
//        }

        ll r2=floor(sqrt(b))-ceil(sqrt(a));
  //cout<<r2<<endl;
      if(r2<0)
      {
          cout<<'0'<<endl;
          continue;
      }
        r2++;
        cout<<r2<<endl;

    }
}
