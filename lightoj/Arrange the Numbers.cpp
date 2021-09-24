#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1005
int const mod=1000000007;
ll fact[M],inv[M];
ll dp[1005][1005];
ll vis[1005][1005];

ll bmod(ll a,ll n)
{
    if(n==0LL)
    {
        return 1LL;
    }
    ll res=bmod(a,n/2)%mod;
    res=(res*res)%mod;
    if(n&1) res=(res*a)%mod;
    return res%mod;
}
void cal()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<M;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }

    inv[M-1]=bmod(fact[M-1],mod-2);
    for(int i=M-2;i>=0;i--)
    {
        inv[i]=(inv[i+1]*(i+1))%mod;
    }
}
ll f(int n,int m)
{
    if(n<0 or m<0) return 0LL;
    if(m==0) return fact[n];
    if(vis[n][m]) return dp[n][m];

    vis[n][m]=1;
    ll lef=(m-1)*f(n-1,m-2);
    ll rgh=(n-m)*f(n-1,m-1);
    dp[n][m]=(lef+rgh)%mod;
    return dp[n][m];
}
int main()
{
    cal();
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        ll subRes1=((fact[m]*inv[k])%mod*inv[m-k])%mod;
        ll subRes2=f(n-k,m-k)%mod;
//        cout<<subRes1<<' '<<subRes2<<endl;
        cout<<"Case "<<++tks<<": "<<(subRes1*subRes2)%mod<<endl;
    }
}
