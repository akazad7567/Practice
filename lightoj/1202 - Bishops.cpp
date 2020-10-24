
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    int tks=0;
    while(t--)
    {
        tks++;
        int c1,c2,r1,r2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        int dif1,dif2;
        dif1=abs(r2-r1);
        dif2=abs(c2-c1);
        if(dif1==dif2) printf("Case %d: 1\n",tks);
        else if(dif1%2==dif2%2) printf("Case %d: 2\n",tks);
        else printf("Case %d: impossible\n",tks);
    }
}
