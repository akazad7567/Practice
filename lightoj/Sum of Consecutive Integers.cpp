//na bujhe korchi

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000050
bool pchk[M];
vector<ll>prime;

void sieve()
{
    pchk[0]=pchk[1]=true;
    for(ll i=3;i<M;i+=2)
    {
        for(ll j=i*i;j<M;j+=2*i)
        {
            pchk[j]=true;
        }
    }

    prime.push_back(2);
    for(ll i=3;i<M;i+=2)
    {
        if(pchk[i]==false) prime.push_back(i);
    }
}

int main()
{
    sieve();
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=1;
        while(n%2==0)
            n/=2;
        for(ll i=0;prime.size()>i and prime[i]<=n/prime[i];i++)
        {
            ll cnt=0;
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    cnt++;
                    n/=prime[i];
                }
            }
            ans*=(cnt+1);
        }
        if(n!=1) ans*=2;

        cout<<"Case "<<++tks<<": "<<ans-1<<endl;
    }
}
