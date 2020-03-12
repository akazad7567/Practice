
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,Case=0;
    scanf("%lld",&t);
    while(t--)
    {
        Case++;
        ll n;
        ll ar[2050]={0};
        scanf("%lld",&n);
        for(ll i=0;i<n;i++) scanf("%lld",&ar[i]);
        sort(&ar[0],&ar[n]);

        ll val=0,low,high,mid,re=0;
        for(ll i=0;i<n-2;i++)
        {
            for(ll j=i+1;j<n-1;j++)
            {
                val=ar[i]+ar[j];
                low=j,high=n-1;

                //find upper bound for val
                while(high>=low)
                {
                    mid=(low+high)/2;
                    if(ar[mid]<val)
                    {
                        low=mid+1;
                    }
                    else high=mid-1;
                }
                re+=max(0LL,(low-1)-j);
                //cout<<i<<' '<<j<<' '<<re<<endl;

            }
        }
        printf("Case %lld: %lld\n",Case,re);
    }
}
