#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        for(ll i=1;i<=n/i;i++)
        {
            ans++;
            if(i*i*2<=n) ans++;
        }

        cout<<"Case "<<++tks<<": "<<n-ans<<endl;
    }
}
