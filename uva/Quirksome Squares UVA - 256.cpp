#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ar[100001]= {0};
int main()
{
     //freopen("out.txt","w",stdout);
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        ll ar2[10000]= {0};
        ll r1=0,r2=0,r3=0,r4=0,j=0,mod=10,p=2,square;

        ll l1=3,l2=0,l3=0,l4=0,k=0;
        for(ll i=0; i<1000000; i++)
        {
            if(i==10)
            {
                l2=k-1;
                //i=32;
                mod=100;
                //p=3;
            }
            else if(i==100)
            {
                l2=k-1;
                //i=317;
                mod=1000;
                //p=5;
            }
            else if(i==1000)
            {
                l3=k-1;
                //i=3163;
                mod=10000;
                //p=7;
            }


            square=ceil(pow(i,2));
            if(square>=99999999)
                break;
            r1=square/mod;
            r2=square%mod;
            if(((r1+r2)*(r1+r2))==square)
            {
                ar2[k]=square;
                l4=k;
                k++;
              //  cout<<k<<ends<<l2<<"->"<<square<<endl;
            }

        }
        //cout<<l1<<endl;
        // cout<<"ok"<<l2<<endl;
        if(n==2)
            for(ll i=0; i<l1; i++) printf("%02lld\n",ar2[i]);


        if(n==4){
            for(ll i=0; i<=l2; i++){
                r1=ar2[i]/100;
        r2=ar2[i]%100;
        if(((r1+r2)*(r1+r2))==ar2[i])
        {
            printf("%04lld\n",ar2[i]);

        }
            }}
        if(n==6){
            for(ll i=0; i<=l3; i++){
                r1=ar2[i]/1000;
        r2=ar2[i]%1000;
        if(((r1+r2)*(r1+r2))==ar2[i])
        {
            printf("%06lld\n",ar2[i]);

        }
        }
    }
        if(n==8){
            for(ll i=0; i<=l4; i++){
                r1=ar2[i]/10000;
        r2=ar2[i]%10000;
        if(((r1+r2)*(r1+r2))==ar2[i])
        {
            printf("%08lld\n",ar2[i]);
        }
            }
        }

    }

}

