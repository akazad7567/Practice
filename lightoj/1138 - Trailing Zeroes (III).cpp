#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,cas=0;
    scanf("%d",&t);
    while(t--)
    {
        cas++;
        ll n;
        scanf("%lld",&n);
        ll low,high,mid,flag=0,sm,ans,res=0;
        low=0,high=1e12;

        while(high>=low)
        {
            mid=(low+high)/2LL;
           // cout<<low<<' '<<high<<' '<<mid<<endl;
            //div=mid;
            sm=5;
            ans=0;
            while(1)
            {
               ans+=(mid/sm);
               sm*=5;
               if((mid/sm)==0LL) break;

            }
           // cout<<low<<' '<<high<<' '<<mid<<' '<<ans<<endl;
            if(n==ans)
            {
                flag=1;
                res=mid;
                high=mid-1;
                continue;
            }
            //cout<<ans<<' '<<n<<endl;
            if(ans>n)
            {
                high=mid-1;
            }
            else low=mid+1;



        }
        if(flag==1LL) cout<<"Case "<<cas<<": "<<res<<endl;
        else cout<<"Case "<<cas<<": impossible\n";
    }
}

