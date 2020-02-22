#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
      ios::sync_with_stdio(false);
       cin.tie(0);
       ll a,b,c,d,r1=0,r2=0,r3=0,re=0;
       while(4==scanf("%lld %lld %lld %lld",&a,&b,&c,&d))
       {
           if(a==0 && b==0 && c==0 && d==0) return 0;
//           if(a==0) a=40;
//           if(c==0) c=40;
            if(a>=b) r1=a-b;
            else r1=40-(b-a);
            if(b<=c) r2=c-b;
            else r2=40-(b-c);
            if(c>=d) r3=c-d;
            else r3=40-(d-c);
            //cout<<r1<<ends<<r2<<ends<<r3<<endl;
           re=(r1+r2+r3)*9;
           re+=1080;
           //if(re>2157) re/=2;
           cout<<re<<endl;
           re=0;
       }
}
