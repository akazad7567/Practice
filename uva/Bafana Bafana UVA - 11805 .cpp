#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // freopen("out.txt","w",stdout);
    ll t;
    cin>>t;
    ll tst=0;
    while(t--)
    {
        tst++;
       ll n,k,p;
       cin>>n>>k>>p;

       ll r1,r2,r3;
     r1=p%n;
     r1+=k;
     r1=r1%n;
     if(r1)
       cout<<"Case "<<tst<<": "<<r1<<endl;
       else cout<<"Case "<<tst<<": "<<n<<endl;

    }
}
