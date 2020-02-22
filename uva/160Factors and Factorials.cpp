#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[100000000]= {0};
ll cnt,maxi=-1e10;
void primeFactor(ll n2)
{

    ll j=0;

    while(!(n2%2))
    {
        if(maxi<2)
            maxi=2;

        ar[2]++;
        // cnt=1;
        //j++;
        //cout<<1<<ends<<ar[2]<<endl;
        n2/=2;
    }
    for(int i=3; i<=sqrt(n2)+1; i+=2)
    {
        if(n2%i==0)
        {
            if(maxi<i)
                maxi=i;
            // cnt++;
            while(!(n2%i))
            {
                ar[i]++;

                //cout<<2<<ar[i]<<endl;
                j++;
                n2/=i;
            }
        }
    }
    if(n2>2)
    {
        if(maxi<n2)
            maxi=n2;
        //cnt++;
        ar[n2]++;
        //cout<<3<<ar[n2]<<endl;
    }
    //return cnt;
}
int main()
{
    //freopen("out.txt","w",stdout);
    ll n,cnt2;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0LL)
            break;
        cnt=0,cnt2=0;
        memset(ar,0,sizeof ar);
        ll r=0,r2=0,r3=0,j=0;
        r=n;
        while(n)
        {

            primeFactor(n);
            // cnt2+=cnt;
            n--;
        }
        if(r/100)
            cnt2=0;

        else if(r/10)
        {
            cout<<' ';
            // cnt2=1;
        }
        else
        {
            cout<<"  ";
            //cnt=2;
        }

        cout<<r<<"! =";


        for(ll i=2; i<1e5;)
        {


            if(ar[i])
            {
                if(ar[i]/100)
                    cnt2=0;

                else if(ar[i]/10)
                {
                    cout<<' ';

                }
                else
                {
                    cout<<"  ";

                }
                cnt++;
                cout<<ar[i];
                //cnt2--;
                if(i==maxi)
                    break;

            }

            if(cnt==15&&i<maxi)
            {
                cnt=0;
                cout<<endl;
                for(ll j=0; j<6; j++)
                    cout<<' ';
            }
            if(i==2)
                i++;
            else
                i+=2;

        }
        cout<<endl;
        //  cout<<ar[maxi]<<endl;
    }
}
