#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar2[2050];
ll ans=0,flag=0;
bool chk(ll ar[],ll mid,ll n,ll k)
{
    ll cnt=0,sm=0,cnt2=0,ind,j=0;
    for(ll i=0; i<n; i++)
    {
        if(ar[i]>mid)
            return false;
        sm+=ar[i];
        if(sm>mid)
        {
            sm=ar[i];
            cnt++;
        }
    }
    cnt++;


    if(cnt<=k)
        return true;
    else
        return false;
}
void fin(ll ar[],ll n,ll k)
{
    ll sm=0;
    for(ll i=0; i<n; i++)
        sm+=ar[i];
    ll low,high,mid;
    low=0;
    high=sm;

    while(high>=low)
    {
        mid=(high+low)/2;
        if(chk(ar,mid,n,k))
        {
            high=mid-1;
            ans=mid;
        }
        else
            low=mid+1;
    }

}
int main()
{
    // freopen("out.txt","w",stdout);
    ll t,tks=0;
    scanf("%lld",&t);
    while(t--)
    {
        memset(ar2,0,sizeof ar2);
        flag=0;
        tks++;
        ll ar[2050];
        ll n,k,sum=0,j=0;
        scanf("%lld %lld",&n,&k);
        for(ll i=0; i<n+1; i++)
            scanf("%lld",&ar[i]);

        fin(ar,n+1,k+1);
        ll thake=n-k;

        for(ll i=0; i<n+1; i++)
        {
            sum+=ar[i];
            if(sum>ans and thake>0LL)
            {

                ar2[j++]=sum-ar[i];
                sum=ar[i];
            }

            if(sum!=ar[i])
                thake--;
            if(thake==0LL)
                ar2[j++]=sum;
            else if(thake<0LL)
                ar2[j++]=ar[i];
        }


        cout<<"Case "<<tks<<": "<<ans<<endl;

        for(ll i=0; i<k+1; i++)
        {
            cout<<ar2[i]<<endl;
        }

    }
}

