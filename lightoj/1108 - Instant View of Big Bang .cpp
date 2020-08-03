    #include<bits/stdc++.h>
    using namespace std;
    #define INF 1000000
    #define MAX 2050
    vector<int>d(MAX,INF);
    vector<int>ans(MAX,0);
    vector<int>adj[MAX];
    vector<bool>used(MAX,false);
    //
    int cnt=0;
    int n,m;
    bool any=false;
    struct add
    {
        int a,b,cost;
    };
    void clean()
    {
        for(int i=0; i<=n+10; i++)
        {
            d[i]=INF;
            ans[i]=0;
            adj[i].clear();
            used[i]=false;
        }
        any=false;
        cnt=0;

    }
    void BFS(int st)
    {
        ans[st]=1;
        queue<int>q;
        q.push(st);
        used[st]=true;
        while(!q.empty())
        {
            int p=q.front();
            ans[p]=1;
            q.pop();
            for(int it:adj[p])
            {
                if(used[it]==false)
                {
                    used[it]=true;
                    q.push(it);
                }

            }

        }

    }
    void Bell(add e[])
    {

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int u,v,w;
                u=e[j].a;
                v=e[j].b;
                w=e[j].cost;
                if(d[v]>d[u]+w)
                {
                    if(i==n)
                    {
                        any=true;
                        if(ans[u]==0)
                        BFS(u);
                    }
                    d[v]=d[u]+w;

                }
            }
        }
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
            for(int i=0; i<m; i++)
            {
                int u,v,w;
                scanf("%d %d %d",&u,&v,&w);
                e[i].a=v,e[i].b=u;
                e[i].cost=w;
                adj[v].push_back(u);
            }
            Bell(e);
            for(int i=0; i<n; i++)
            {
                if(ans[i]==1)
                    cnt++;
            }
            if(any)
            {
                printf("Case %d: ",tks);
                for(int i=0; i<n; i++)
                {
                    if(cnt==1 and ans[i]==1)
                        printf("%d",i);
                    else if(ans[i]==1)
                        printf("%d ",i),cnt--;
                }
                printf("\n");
            }
            else
                printf("Case %d: impossible\n",tks);
            clean();
        }

    }

