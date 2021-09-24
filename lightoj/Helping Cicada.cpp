// C++ program to find all subsets of given set. Any
// repeated subset is considered only once in the output
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 200000

ll num;

ll LCM(ll a,ll b)
{
    ll g=__gcd(a,b);
    return a/g*b;
}
ll allPossibleSubset(ll arr[], ll n)
{
    ll count = pow(2, n);
    ll sm=0;
    for (ll i = 0; i < count; i++) {
            ll nn=0,v=1;

        for (ll j = 0; j < n; j++) {

            if ((i & (1 << j)) != 0)
                {
                    nn++;
                    v=LCM(v,arr[j]);

                }
        }

        if(nn==0) continue;
        if(nn%2==1) sm+=num/v;
        else sm-=num/v;
    }

    return sm;
}
// Driver code
int main()
{
//    freopen("out.txt","w",stdout);
//    sieve();
	ll t,tks=0;
	cin>>t;

	while(t--)
    {
        ll n;
        cin>>num>>n;
        ll ar[n+2];
        for(ll i=0;i<n;i++) cin>>ar[i];
        sort(&ar[0],&ar[n]);
        bool b=false;
        for(ll i=0;i<n;i++)
        {
            if(ar[i]==1) b=true;
        }
        if(b)
        {
            cout<<"Case "<<++tks<<": "<<0<<endl;
            continue;
        }
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(ar[j]>0 and ar[i]>0 and ar[j]%ar[i]==0) ar[j]=0;
            }
        }


        ll ar2[n+5];


        ll j=0;
        for(ll i=0;i<n;i++)
        {
            if(ar[i]>0) ar2[j++]=ar[i];
        }

        cout<<"Case "<<++tks<<": "<<max(0LL,num-allPossibleSubset(ar2,j))<<endl;
    }

	return 0;
}


