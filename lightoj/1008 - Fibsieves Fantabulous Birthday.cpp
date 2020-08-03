#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lmt=1e15+10;
int main()
{

   int t,cas=0;
   scanf("%d",&t);
   while(t--)
   {
       cas++;
       ll s;
       scanf("%lld",&s);
       ll sq=sqrtl(s);
       if(sq*sq<s) sq++;
       ll md=sq*sq-(sq-1LL);
       ll c=0,r=0;
//       cout<<sq<<endl;
       if(sq*sq & 1LL)
       {
           if(md<=s) r=sq,c=sq*sq-s,c++;
           else c=sq,r=(s-(sq-1LL)*(sq-1LL));
       }
       else
       {
           if(md<=s) c=sq,r=sq*sq-s,r++;
           else r=sq,c=(s-(sq-1LL)*(sq-1LL));
       }
//       cout<<c<<' '<<r<<endl;

      printf("Case %d: %lld %lld\n",cas,c,r);
   }

}

