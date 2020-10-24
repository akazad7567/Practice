#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e18+10
vector<ll>vec;
ll ar[100];
ll cnt=1;
void Find()
{
    ll a=1LL;
    ar[0]=1LL;
    for(ll i=1LL;i<50LL;i++)
    {
        a*=i;
        if(a>=INF) break;
        ar[cnt++]=a;
    }
//    cout<<cnt<<' '<<ar[20]<<endl;
}
void binary_s(ll n)
{
    ll last=-1LL,ans=0,tmp=n;
    int cnt2=0;
    while(n>0LL)
    {
        ll low=0LL,high=cnt-1,mid;
        ll mx=-1LL;
        while(low<=high)
        {
            mid=(low+high)/2LL;
            if(ar[mid]<=n and (last>mid or last==-1LL))
            {
//                cout<<last<<' '<<mid<<endl;
                mx=mid;
                low=mid+1LL;
            }
            else high=mid-1LL;
        }
//        cout<<ans<<endl;
//        cout<<endl;
//        if(last==mx and mx!=1) break;
//        if(mx==1LL) cnt2++;
//        if(cnt2==2LL) mx=0;
        if(mx!=-1LL) vec.push_back(mx),n-=ar[mx],ans+=ar[mx],last=mx;
        else break;
        if(last==0LL or ans==tmp) break;
    }
    if(ans!=tmp or cnt2>2LL) vec.clear();
}
int main()
{
//    freopen("out.txt","w",stdout);
    Find();
    ll t,tks=0;
    scanf("%lld",&t);
    while(t--)
    {
        tks++;
        ll n;
        scanf("%lld",&n);
        binary_s(n);
        printf("Case %lld: ",tks);
        if(vec.size()>0)
        {
            int sz=vec.size();
            sort(vec.begin(),vec.end());
            for(int i=0;i<sz-1;i++)
            {
                printf("%lld!+",vec[i]);
            }
            printf("%lld!\n",vec[sz-1]);
        }
        else printf("impossible\n");
        vec.clear();
    }
}
