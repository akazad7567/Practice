#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1000003;
#define M 1000001
ll fact[M],inv[M];

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
void  cal()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<M;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
//        if(i>999900)
//        cout<<i<<' '<<fact[i]<<endl;
    }
//    cout<<fact[M-1]<<endl;
    inv[M-1]=bmod(fact[M-1],mod-2);
//    cout<<inv[M-1]<<endl;

    for(int i=M-2;i>=0;i--)
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
//        cout<<fact[n]<<' '<<inv[k]<<endl;
        cout<<"Case "<<++tks<<": "<<(fact[n]*inv[k]*inv[n-k])%mod<<endl;
    }
}
