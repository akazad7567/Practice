
#include<bits/stdc++.h>
using namespace std;

bool chk(int ar[],int mid,int n,int k)
{
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
        if(ar[i]>mid) return false;
        if(sum>mid)
        {
            cnt++;
            sum=ar[i];
        }

    }
    cnt++;
    if(cnt<=k) return true;
    else return false;
}

int solve(int ar[],int n,int k)
{
    int low,high,ans=0,mid=0;
    low=1,high=0;
    for(int i=0;i<n;i++) high+=ar[i];
    while(high>=low)
    {
        mid=(high+low)/2;
        if(chk(ar,mid,n,k))
        {
            high=mid-1;
            ans=mid;
            //cout<<ans<<endl;
        }
        else low=mid+1;
    }
    return ans;
}
int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int n,k;
        scanf("%d %d",&n,&k);
        int ar[1050];
        for(int i=0;i<n;i++) scanf("%d",&ar[i]);
        int re=solve(ar,n,k);
        cout <<"Case "<<tks<<": "<<re<<endl;
    }
}
