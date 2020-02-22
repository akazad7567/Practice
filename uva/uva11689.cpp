#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,t,r1=0,r2=0,re=0;
    cin>>t;
    for(int i=0;i<t;i++){

       cin>>a>>b;
       if(a>b) cout<<'>';
       else if(a<b) cout<<'<';
       else cout<<'=';
       cout<<'\n';
    }
}
