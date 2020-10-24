#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("out.txt","w",stdout);
    int tks=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==1 or m==1) printf("Case %d: %d\n",tks,max(n,m));
        else if(n==2 or m==2)
        {
            n=max(n,m);
            if(n%4==2) n+=2;
            else if(n%4==1 or n%4==3) n++;
            printf("Case %d: %d\n",tks,n);
        }
        else printf("Case %d: %d\n",tks,((n*m)+1)/2);
    }
}
