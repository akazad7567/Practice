#include<bits/stdc++.h>
using namespace std;
#define MAX 50100
#define INF 1000000007
vector<int>d(MAX,INF);
vector<int>dis(MAX,0);
int n,m;
struct add
{
    int a,b,cost;
};
void clean()
{
    for(int i=0;i<=n;i++)
    {
        d[i]=INF;
        dis[i]=0;
    }
}
void Bell(add e[])
{
    int src=1;
    d[src]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(d[e[j].a]<INF)
            {
                int u,v,w=0;
                u=e[j].a,v=e[j].b;
                w=dis[v]-dis[u];
                w=w*w*w;

                if(d[v]>d[u]+w)
                {
                    d[v]=d[u]+w;
//                    prnt[e[j].b]=e[j].a;
                }
            }
        }
    }
}
int main()
{
    freopen("out.txt","w",stdout);
    int t,tks=0;
    add e[MAX];
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            int d;
            scanf("%d",&d);
            dis[i]=d;
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            scanf("%d %d",&u,&v);
//            w=dis[v]-dis[u];
            e[i].a=u,e[i].b=v;
//            e[i].cost=w;
        }
        Bell(e);
        int q;
        scanf("%d",&q);
        printf("Case %d:\n",tks);
        for(int i=0;i<q;i++)
        {
            int q1;
            scanf("%d",&q1);
            int ans=d[q1];
            if(ans>=3 and ans!=INF)
            printf("%d\n",ans);
            else printf("?\n");
        }
        clean();
    }
}
