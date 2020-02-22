#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    ll r,c;
   ll lo=1;

    while(scanf("%lld%lld",&r,&c)==2 && r+c)
    {
            if(lo!=1) cout<<'\n';
     //   if(r==0 and c==0) return 0;
        char ch[111][111];
            memset(ch,'0', sizeof ch);
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {

                cin>>ch[i][j];
            }
        }
        if(r)
       cout<<"Field #"<<lo<<':'<<'\n';
        for(ll i=0;i<r;i++)
        {


            for(ll j=0;j<c;j++)
            {
                 ll cn=0;
                if(ch[i][j]=='.')
                   {

                for(ll k=i-1;k<=i+1;k++)
                {
                    for(ll l=j-1;l<=j+1;l++)
                    {
                        if(k>=0 &&k<=r && l>=0 &&l<=c){
                        if(ch[k][l]=='*') cn++;
                        }
                    }

                }
                cout<<cn;


                   }
                   if(ch[i][j]=='*') cout<<'*';
            }
            cout<<'\n';
        }
         //cout<<'\n';
        lo++;
    }

}
