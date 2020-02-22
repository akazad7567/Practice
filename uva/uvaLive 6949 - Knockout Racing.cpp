

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,a[100010],b[100010],t;
    int s,r;

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];

    }
    int cn=0;
    for(int j=0;j<m;j++)

    {
        cin>>x>>y>>t;
       // s=(y[i]-x[i]+1)%t[i];
       for(int k=0;k<n;k++){
       r=b[k]-a[k];
       s=t%r;
       //cout<<t<<ends<<r<<endl;
       if((t/r)%2) s=b[k]-s;//for odd
       else s=a[k]+s;//for even

            if(s>=x&&s<=y){ cn++;
            //cout<<s<<ends<<cn<<endl;
            }

            }
             cout<<cn<<endl;
             cn=0,s=0;
    }




    }


