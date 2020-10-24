#include<bits/stdc++.h>
using namespace std;
#define MAX 1000050
typedef long long ll;
ll inc=0;
ll ar[10000001];
ll prime[10000001],len=0;
void sieve()
{
    bool b[MAX];
    memset(b,true,sizeof b);

    b[1]=false;
    for(ll i=2;i*i<MAX;i++)
    {
        if(b[i])
        {
            for(ll j=i*i;j<MAX;j+=i)
            {
                b[j]=false;
            }
        }
    }

    for(ll i=2;i<MAX;i++)
    {
        if(b[i]) ar[inc++]=i;
    }

}

void s_sieve(ll l,ll r)
{

    ll d=r-l+1;
    bool mark[d];
    memset(mark,true,sizeof mark);


    for(ll i=0;ar[i]*ar[i]<=r;i++)
    {
        ll cur,base;
        cur=ar[i];
        base=floor(l/cur)*cur;

        if(base<cur) base+=cur;

        for(ll j=base;j<=r;j+=cur)
        {
            if(mark[j-l]) mark[j-l]=false;
        }
        if(base==cur) mark[base-l]=true;
    }


  // ll mi=1e8,ma=-1e8,c_l,c_r,c_l2,c_r2,d;
 if(l<=2) prime[len++]=2;
    for(ll i=0;i<d;i++)
    {
        if(mark[i])
        {
           if((i+l)%2==1 and (i+l)>1)
               {
               	prime[len++]=i+l;//store the value of exact prime
               }
        }
    }
    //cout<<endl;

}

int main()
{
   //freopen("out.txt","w",stdout);
    sieve();
    ll l,r;
    while(scanf("%lld %lld",&l,&r)!=EOF)
    {
        len=0;
        memset(prime,0,sizeof prime);
        s_sieve(l,r);
        ll mi=1e8,ma=-1e8,c_l,c_r,c_l2,c_r2,d;
       ll cnt=0;
       //cout<<len<<endl;
        for(ll i=0;i<len-1;i++)
        {
           // cout<<prime[i]<<ends;
        	d=prime[i+1]-prime[i];
        	if(d>ma)
        	{
        		ma=d;
        		c_l2=prime[i];
        		c_r2=prime[i+1];
        		cnt++;
        	}

        	if(d<mi)
        	{
        		mi=d;
        		c_l=prime[i];
        		c_r=prime[i+1];
        		cnt++;
        	}
        }
        //cout<<endl;
       if(cnt>0)
        cout<<c_l<<','<<c_r<<" are closest, "<<c_l2<<','<<c_r2<<" are most distant.\n";
        else cout<<"There are no adjacent primes.\n";

    }
}

