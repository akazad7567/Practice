#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int isprime(ll n)
{
    //cout<<n<<" s not prime.\n";
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    ll a;
   // cout<<a<<" is not prime.\n";
    while(cin>>a&&a!=EOF)
    {
        //cout<<a<<" is not prime.\n";
        ll g=a;
        int b=isprime(a);
        if(!b) cout<<g<<" is not prime.\n";
        if(b)
        {
            ll c=a;
            ll d,e=0,f;
            ll cn=1,ten=1;
//  ll ten =1;
           while(c>0){
               a=c%10;
               c=c/10;
               e=e+a*ten;
               ten=10;
//               b=c%10;
//               e=(e*ten)+(a*10)+b;
              cout<<e<<endl;
//               c=c/10;
//               ten=ten*10;
        }


       // else e=c;
        // cout<<e<<endl;
                f=isprime(e);
                if(f) cout<<g<<" is emirp.\n";
                else cout<<g<<" is prime.\n";


        }
    }
}
