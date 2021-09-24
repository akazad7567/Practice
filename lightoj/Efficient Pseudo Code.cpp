#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000
vector<ll>prime;
bool chk[M];
ll const mod=1000000007;

void sieve()
{
    for(ll i=3;i<M;i+=2)
    {
        for(ll j=i*i;j<M;j+=i*2)
        {
            chk[j]=true;
        }
    }

    for(ll i=4;i<M;i+=2) chk[i]=true;

    for(ll i=2;i<M;i++)
    {
        if(chk[i]==false) prime.push_back(i);
    }
}

ll bmod(ll a,ll n)
{
    if(n==0)
    {
        return 1LL;
    }
    ll r=bmod(a,n/2);
    r*=r;
    r%=mod;
    if(n&1) r*=a;
    return r%mod;
}
int main()
{
    sieve();

    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll sm=1;

        for(ll i=0;prime[i]*prime[i]<=n;i++)
        {
            int cnt=0;
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    cnt++;
                    n/=prime[i];
                }
                sm*=(((bmod(prime[i],cnt*m+1)-1)%mod)*bmod(prime[i]-1,mod-2)%mod)%mod;
                sm%=mod;
            }
        }

        if(n!=1)
        {
            if(n%mod==0) sm=1;
            else sm*=((bmod(n,m+1)-1)%mod*(bmod(n-1,mod-2)%mod))%mod;
        }
        cout<<"Case "<<++tks<<": "<<sm%mod<<endl;
    }
}
