#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime[10001000];
vector<ll>vec;

void sieve()
{
    prime[0]=prime[1]=true;
    for(ll i=3;i*i<=10000007;i+=2)
    {
        for(ll j=i*i;j<=10000007;j+=2*i)
        {
            prime[j]=true;
        }
    }


    for(ll i=4;i<=10000007;i+=2) prime[i]=true;

    for(ll i=2;i<=10000000;i++)
    {
        if(prime[i]==false) vec.push_back(i);
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
        for(ll i=0;vec.size()>i and vec[i]<=n/vec[i];i++)
        {
            ll cnt=0;
            if(n%vec[i]==0){
            while(n%vec[i]==0)
            {
                n/=vec[i];
                cnt++;
            }
            ans*=(2*cnt+1);
            }
        }
        if(n!=1) ans*=3;

        cout<<"Case "<<++tks<<": "<<ans/2+1<<endl;

    }

}
