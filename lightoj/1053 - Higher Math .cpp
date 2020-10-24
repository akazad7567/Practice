#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        ll a,b,c,ans;
        scanf("%lld %lld %lld",&a,&b,&c);
        bool flag=false;
        if(a==sqrtl(b*b+c*c)) flag=true;
        if(b==sqrtl(a*a+c*c)) flag=true;
        if(c==sqrtl(a*a+b*b)) flag=true;
        if(flag) printf("Case %d: yes\n",tks);
        else printf("Case %d: no\n",tks);
    }
}
