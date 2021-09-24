#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000005
vector<ll>prime;
int vis[M];
void fndPrime()
{
    for(ll i=3;i<M;i+=2)
    {
        if(vis[i]==0){
        for(ll j=i*i;j<M;j+=2*i)
        {
            vis[j]=1;
        }
        }
    }
    for(ll i=4;i<M;i+=2)
    {
        vis[i]=1;
    }
    for(int i=2;i<M;i++)
    {
        if(vis[i]==0) prime.push_back(i);
    }

}


int main()
{
//    freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fndPrime();
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n>>a;
        ll ans=1;
        ll tmpn=n;
        if(a*a>n)
        {
            cout<<"Case "<<++tks<<": "<<0<<endl;
            continue;
        }
        for(ll i=0;i<prime.size() and prime[i]*prime[i]<=n;i++)
        {
            int cnt=1;

            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                    cnt++;
                }
                ans*=cnt;
            }
        }

        if(n>1) ans*=2;
        ans/=2;
        for(int i=1;i<a;i++)
        {
            if(tmpn%i==0) ans--;
        }
        cout<<"Case "<<++tks<<": "<<max(0LL,ans)<<endl;
    }
}
