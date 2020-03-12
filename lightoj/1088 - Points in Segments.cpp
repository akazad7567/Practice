#include<bits/stdc++.h>
using namespace std;
int ar[100050];
int main()
{
    //freopen("out.txt","w",stdout);

//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    int t,Case=0;
    scanf("%d",&t);
    while(t--)
    {
        Case++;
        int n,q,a,b;
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++) scanf("%d",&ar[i]);
        printf("Case %d:\n",Case);
        while(q--)
        {
            scanf("%d %d",&a,&b);
            int low,high,mid,l,r;
            low=0,high=n-1;

            //find lower bound for a

            while(high>=low)
            {
               mid=(low+high)/2;
               if(ar[mid]>=a)
               {
                   high=mid-1;
               }
               else low=mid+1;
            }
            l=high+1;

            //find upper bound for b
            low=0,high=n-1;

            while(high>=low)
            {
                mid=(low+high)/2;
                if(ar[mid]<=b)
                {
                    low=mid+1;
                }
                else high=mid-1;
            }
            r=low-1;

            //cout<<max(r-l+1,0)<<endl;
            printf("%d\n",max(r-l+1,0));
        }

    }
}
