#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0;i<n;i++) scanf("%d",&ar[i]);
        int mn=INT_MAX;
        int mx=INT_MIN;
        int ar2[5];
        for(int i=0;i<n;i++)
        {
            //first right
            int mn2=ar[i];
            int mx2=ar[i];
            int cnt=1;
            int cnt2=1;
            memset(ar2,0,sizeof ar2);
            ar2[i]=1;
//            cout<<i<<"=> ";
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j] and ar2[j]==0) mn2=min(mn2,ar[j]),cnt2++,ar2[j]=1;
            }
//            cout<<cnt2<<' ';
            for(int j=i-1;j>=0;j--)
            {
                if(ar[i]<ar[j] and ar2[j]==0) mx2=max(mx2,ar[j]),cnt2++,ar2[j]=1;
            }
//            cout<<cnt2<<' ';
            for(int j=i+1;j<n;j++)
            {
                if(mx2>ar[j] and ar2[j]==0) ar2[j]=1, cnt2++;
            }
//            cout<<cnt2<<' ';
            for(int j=i-1;j>=0;j--)
            {
                if(mn2<ar[j] and ar2[j]==0) ar2[j]=1,cnt2++;
            }
//            cout<<cnt2<<endl;

            mn=min(mn,cnt2),mx=max(mx,cnt2);
        }
        cout<<mn<<' '<<mx<<endl;

    }
}

