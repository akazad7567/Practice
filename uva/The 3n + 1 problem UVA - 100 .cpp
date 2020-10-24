#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     ll a,b,arr[10010]={0};
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        ll maa=-1e9;
      //int d=max(a,b)-min(a,b);
        ll ma=max(a,b);
        ll mi=min(a,b);
       // cout<<ma<<ends<<mi<<endl;
        for(ll i=mi,j=0;i<=ma;i++)
        {
            ll c=i,cn=1;
            while(c!=1)
            {
                if(c%2!=0) c=(c*3)+1;
                else c/=2;
                cn++;
            }
           // arr[j]=cn;
            if(cn>maa) maa=cn;
            //cout<<maa<<endl;

            j++;
        }

        cout<<a<<' '<<b<<' '<<maa<<'\n';


    }
}

