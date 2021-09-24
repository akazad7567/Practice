#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1000000007;
#define M 2000005
ll fact[M],inv[M];

ll bmod(ll x,ll b)
{
    if(b==0LL)
    {
        return 1LL;
    }
    ll res=bmod(x,b/2);
    res=(res*res)%mod;
    if(b&1) res=res*x;
    return res%mod;
}
void cal()
{
    fact[0]=fact[1]=1;
    for(ll i=2;i<M;i++) fact[i]=(fact[i-1]*i)%mod;
    inv[M-1]=bmod(fact[M-1],mod-2);

    for(ll i=M-2;i>=0;i--)
    {
        inv[i]=(inv[i+1]*(i+1))%mod;

    }
}

int main()
{
    cal();
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
//        cout<<fact[n]<<' '<<(fact[n]*inv[k]*inv[n-k])<<endl;
        ll ans=(((fact[n+k-1]*inv[k-1])%mod)*inv[n])%mod;
        cout<<ans<<endl;
    }
}
