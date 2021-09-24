#include<bits/stdc++.h>
using namespace std;

int ar[1000005];
bool br[1000005];

int main()
{
//    freopen("out.txt","w",stdout);
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar2[n+10];
        memset(ar,0,sizeof ar);
        memset(br,true,sizeof br);
        for(int i=0;i<n;i++)
        {
            cin>>ar2[i];
            ar[ar2[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(br[ar2[i]])
            {
                br[ar2[i]]=false;

                ans+=(ar2[i]+1)*((ar[ar2[i]]+ar2[i])/(ar2[i]+1));
//                cout<<((((ar[ar2[i]])+cnt)/ar2[i])*ar2[i])+(((ar[ar2[i]])+cnt)/ar2[i])<<endl;
            }
        }
        cout<<"Case "<<++tks<<": "<<ans<<endl;
    }
}
