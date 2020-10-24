#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int x1,y1,x2,y2;
        int m,n1,n2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        scanf("%d",&m);
        printf("Case %d:\n",tks);
        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&n1,&n2);
            if(n1>x1 and n1<x2 and n2>y1 and n2<y2)
                printf("Yes\n");
            else printf("No\n");
        }
    }
}
