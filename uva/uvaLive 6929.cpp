#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 int t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n,sm=0;
        cin>>n;
     for(int i=1;i<=40;i++)
     {
         if(pow(2.0,(i*1.0))==n||n==1) goto g1;
     }

            if(n%2==1)
//            {
//               // cout<<"odd"<<endl;
//
//                for(int i=(n/2)+1,j=(n/2)+1;i!=0;i--)
//                {
//                    v.push_back(i);
//                    sm+=i;
//                    if(sm==n)
//
//                        goto g2;
//
//                }
//            }
        else
        {
            if(n%3==0)
            {
                for(int i=(n/3)+1,j=(n/3)+1;i!=0;i--)
                {
                    v.push_back(i);
                    sm+=i;
                    if(sm==n)
                    goto g2;

                }
            }
            if(n%5==n)
            {
                for(int i=(n/5)+2;;i--)
                {
                    v.push_back(i);
                    sm+=i;
                    if(sm==n)
                    {
                       // s=1;
                        goto g2;
                    }
                }
            }

            if(n%4==0)
            {
                for(int i=(n/4)+1,j=(n/4)+1;i!=0;i--)
                {
                    v.push_back(i);
                    sm+=i;
                    if(sm==n)
                    {
                        //s=1;
                        goto g2;
                    }
                    if(sm>n)
                    {
                        v.erase(v.begin());
                        sm-=j;
                        j--;
                    }
                }
            }
            else
            {
                for(int i=(n%4)+(n/4);i!=0;i--)
                {
                    v.push_back(i);
                    sm+=i;
                    if(n==sm)
                    {
                        //s=1;
                        goto g2;
                    }
                }
            }
        }
        g1:{
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
            g2:{
                cout<<n<<" = ";
                for(int i=v.size()-1;i>=1;i--)
                {
                    cout<<v[i]<<" + ";
                }
                cout<<v[0];
            }
                cout<<endl;
                sm=0;


    }


}
