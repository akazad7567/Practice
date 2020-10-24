#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool b[100001];
ll cnt=0;
ll cn[100001]={0};
void sieve(ll n)
{
    memset(b,true,sizeof b);

    for(ll i=2;i*i<=n;i++)
    {
        if(b[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                b[j]=false;
            }
        }
    }

    for(ll i=2;i<=n;i++)
    {
        if(b[i])
        {
            cnt++;
            cn[i]=cnt;
        }
        cn[i]=cnt;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve(100001);
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll n2,k2;
        n2=sqrt(n);
        k2=sqrt(k);
        if(n<4)
        {
            cout<<0<<' '<<0<<endl;
            continue;
        }
        if(n<=k)
        {
            cout<<cn[n2]<<' '<<0<<endl;
            continue;
        }
        cout<<cn[n2]<<' '<<cn[n2]-cn[k2]<<endl;
    }
}
