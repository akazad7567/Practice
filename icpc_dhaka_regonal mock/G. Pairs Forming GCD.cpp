#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int r=0,r2=0;
        for(int i=1;i<=x;i++)
        {
            r=x/i;

            if(r*2>=y){
                r2=i;
                //cout<<r2<<endl;
            }
            else break;
        }
        cout<<r2<<endl;
    }
}
