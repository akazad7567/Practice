#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // freopen("out.txt","w",stdout);
    ll t;
    cin>>t;
   // ll tst=0;
    while(t--)
    {
       ll n;
       cin>>n;
       ll ar[100]={0};
       ll r1=0,r2=0;
       for(ll i=1;i<=n;i++)
       {
           if(i>9)
           {
               r2=i;
               while(r2!=0)
               {
                   r1=r2%10;
                   r2/=10;
                   ar[r1]++;
               }
           }
           else
           ar[i]++;
       }

     for(ll i=0;i<=8;i++)
     {
         cout<<ar[i]<<' ';


    }
    cout<<ar[9];
    cout<<endl;
}
}
