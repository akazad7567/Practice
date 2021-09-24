#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll lef=1e19;
        ll low,high;
        ll nxt=0;
        vector<ll>ans;
        while(1)
        {
            low=n,high=lef-1;
            bool chk=false;

            while(low<=high)
            {
                ll mid=(low+high)/2;
                ll val=mid/10;
                if(mid-val<=n)
                {
                    low=mid+1;
                    if(mid-val==n) chk=true, nxt=mid;
                }
                else high=mid-1;
            }
            lef=nxt;
            if(chk==false or lef<n) break;

            if(lef-(lef/10)==n)
            ans.push_back(lef);
            if(lef-1<n) break;
//            cout<<lef<<' ';


        }
        cout<<"Case "<<++tks<<": ";

        reverse(ans.begin(),ans.end());
        int j=0;
        for(auto i=ans.begin(); i!=ans.end(); i++,j++)
        {
            cout<<*i;
            if(j+1<ans.size()) cout<<' ';
        }
        cout<<endl;


    }
}
