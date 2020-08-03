#include<bits/stdc++.h>
using namespace std;
#define INF 100000007
#define MAX 1050
vector<int>d(MAX,INF);
vector<bool>vis(MAX,false);
vector<int>prnt(MAX,-1);
vector<int>ans(MAX,0);
vector<int>adj[MAX];
int n,m;
bool any=false;
struct add
{
    int a,b,cost;
};
void clean()
{
    for(int i=0;i<=n;i++)
    {
        vis[i]=false;
        prnt[i]=-1;
        d[i]=INF;
        ans[i]=0;
    }
    any=false;

}
void Bell(add e[])
{

    for(int k=0;k<n;k++)
    {
        int src=k;
        if(vis[src]==false)
        {
            vis[src]=true;
            d[src]=0;
            for(int i=1;i<=n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(d[e[j].a]<INF)
                    {
                        vis[e[j].a]=true;
                        if(d[e[j].b]>d[e[j].a]+e[j].cost)
                        {
                            if(i==n) ans[e[j].a]=1,any=true;
                            vis[e[j].b]=true;
                            d[e[j].b]=d[e[j].a]+e[j].cost;
                            if(prnt[e[j].b]==-1)
                            prnt[e[j].b]=e[j].a;

                        }
                    }
                }
            }
        }
    }
}

void BFS(int st)
{
    cout<<st<<endl;
    queue<int>q;
    vector<bool>used(n);
    vector<int>parent(n);
    q.push(st);
    used[st]=true;
    parent[st]=-1;
    bool any2=false;
    while(!q.empty())
    {
        int p=q.front();
        cout<<p<<"-> ";
//        vis[st]=true;
        q.pop();
        for(int it:adj[p])
        {
            cout<<it<<' ';
            if(used[it]==false)
            {
                used[it]=true;
                q.push(it);
                parent[it]=p;
            }
            if(ans[it]==1)
            {
                for(int i=it;i!=-1;i=parent[i]) ans[i]=1;
                any2=true;
                break;
            }
        }
        if(any2) break;
    }
    cout<<"outer\n";
}

int main()
{
//    freopen("out.txt","w",stdout);
    int t,tks=0;
    scanf("%d",&t);
    add e[MAX];
    while(t--)
    {
        tks++;

        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            e[i].a=u,e[i].b=v;
            e[i].cost=w;
            adj[u].push_back(v);
        }
//        cout<<"ok\n";
        Bell(e);
//        cout<<prnt[0]<<endl;
        if(any)
       {
           for(int i=0;i<n;i++){
           if(ans[i]==0)
           BFS(i);
           }
           printf("Case %d: ",tks);
            for(int i=0;i<n;i++)
            {
                if(ans[i]==1) printf("%d ",i);
            }
            printf("\n");
        }
        else printf("Case %d: impossible\n",tks);
        clean();
    }
    getchar();
}

/*
21 32
20 7 -14
16 0 -9
10 14 0
6 10 -1
1 20 -11
17 15 -31
11 5 1
20 18 17
6 19 21
5 1 8
5 6 15
20 5 -3
6 7 24
17 0 0
18 0 15
7 20 -14
18 4 4
0 10 28
15 3 25
0 12 25
18 6 -27
5 14 -11
4 0 -10
4 12 15
6 1 6
4 6 22
12 19 -28
16 7 14
9 0 -9
16 1 1
8 11 -2
13 1 5
*/
