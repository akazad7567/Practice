#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fndlog(ll a,ll b)
{
    return (log(a)/log(b));
}

int main()
{
//    freopen("out.txt","w",stdout);
    ll t,tks=0;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll tmpx=x;
        if(x<0) x*=-1;

        ll ans=1;
        for(ll i=2;i*i<=x;i++)
        {
            ll p=fndlog(x,i);
            if(powl(i,p)==x)
            {
                ans=p;
//                if(tmpx<0 and ans%2==0) ans=1;
                if(tmpx>=0) break;
                if(tmpx<0 and ans&1) break;

            }
        }
        if(tmpx<0 and ans%2==0) ans=1;

        cout<<"Case "<<++tks<<": "<<ans<<endl;

    }
}
