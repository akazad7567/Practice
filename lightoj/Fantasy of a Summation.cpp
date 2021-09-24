#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bpow(ll a,ll n,ll mod)
{
    if(n==0)
    {
        return 1LL;
    }
    ll res=bpow(a,n/2,mod);
    res*=res;
    res%=mod;
    if(n&1) res*=a;
    return res%mod;
}
int main()
{
//    freopen("out.txt","w",stdout);
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n,k,mod;
        cin>>n>>k>>mod;
        ll ar[n+5];
        ll sm=0;
        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
            sm+=ar[i];
        }
        sm%=mod;
        sm=(sm*k)%mod;

        sm*=bpow(n,k-1,mod);
        sm%=mod;


        cout<<"Case "<<++tks<<": "<<sm%mod<<endl;



    }
}
