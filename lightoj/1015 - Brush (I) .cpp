#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int n;
        scanf("%d",&n);
        int tot=0;
        for(int i=0;i<n;i++)
        {
            int m;
            scanf("%d",&m);
            if(m>0) tot+=m;
        }
        printf("Case %d: %d\n",tks,tot);
    }
}
