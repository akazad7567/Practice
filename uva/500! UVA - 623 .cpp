#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //freopen("out.txt","w",stdout);
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0){ cout<<n<<'!'<<endl<<1<<endl;
        continue;
        }
        if(n==1){ cout<<n<<'!'<<endl<<1<<endl;
        continue;
        }
        vector<ll>v(10000,0);
        ll s=0,l=0,tmp4,in=0;
        tmp4=n;
        while(tmp4)
        {
            v[in++]=tmp4%10;
            tmp4/=10;
        }

        //v[0]=1;
        l=in-1;
        for(ll i=n-1; i>1; i--)
        {

            ll tmp2,tmp3,ini=0;

            ll c1=0,c2=0;

                s=l;
                for(ll j=0; j<=s; j++)
                {
                    c1=((v[j]*i)+c2)%10;
                    c2=((v[j]*i)+c2)/10;
                    v[j]=c1;


                    if(j==s and c2)
                    {
                        tmp2=c2;
                        while(tmp2){
                        l++;
                        tmp3=tmp2%10;
                        v[l]=tmp3;
                        //cout<<v[l]<<endl;
                        tmp2/=10;


                        }
                    }
                }

//             for(ll k2=l; k2>=0; k2--)  cout<<v[k2]<<ends;
//                   cout<<endl;
        }
        cout<<n<<'!'<<endl;
        for(ll i=l; i>=0; i--)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
}

