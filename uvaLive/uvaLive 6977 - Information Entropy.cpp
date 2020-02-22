#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t,n,p,ans=0;
    char ch[100];

    cin>>t;

    while(t--)
    {
        cin>>n>>ch;
        for(int i=0;i<n;i++)
        {
            cin>>p;

            if(p==0) continue;
            p/=100.0;
            if(ch[0]=='b') ans-=p*(log(p)/log(2));
            else if(ch[0]=='n') ans-=p*(log(p)/log(exp(1)));
            else if(ch[0]=='d') ans-=p*(log(p)/log(10));
        }
        printf("%.12f\n",ans);
        ans=0;
    }

}
