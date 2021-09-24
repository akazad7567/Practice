#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 2147483660


int main()
{


    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        ll prv1=n,prv2=0;

        for(ll i=1;i<=n/i;i++)
        {
            ll tmp=i;
            if(n/i!=i) tmp+=n/i;
            ans+=tmp+max(0LL,(prv1-n/i)-1)*prv2;
            prv1=n/i,prv2=i;
        }

        cout<<"Case "<<++tks<<": "<<ans+max(0LL,(prv1-prv2-1))*prv2<<endl;
    }
}


