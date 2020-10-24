#include<bits/stdc++.h>
using namespace std;
#define MAX 700
vector<int>adj[MAX];
vector<bool>vis(MAX,false);
int ar[MAX][MAX];
void clean(int r,int c)
{
    for(int i=0;i<MAX;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++) ar[i][j]=0;
    }
}
void add(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
//    cout<<a<<' '<<b<<endl;
}
int bfs(int st)
{
    queue<int>q;
    q.push(st);
    vis[st]=true;
    int cnt=0;

    while(!q.empty())
    {
        int p=q.front();
//        cout<<p<<' ';
        q.pop();
        cnt++;

        for(int it:adj[p])
        {

            if(vis[it]==false)
            {

                vis[it]=true;
                q.push(it);
            }
        }
    }
//    cout<<endl;

    return  cnt;
}

int main()
{
    int t;
    scanf("%d",&t);
    int tks=0;
    while(t--)
    {
        tks++;
        int c,r;
        scanf("%d %d",&c,&r);
        getchar();
//        cout<<"ok\n";
        int st=0,cnt=1;
        for(int i=0;i<r;i++)
        {
            char ch[25];
            scanf("%s",ch);

            for(int j=0;j<c;j++)
            {

                if(ch[j]=='.' or ch[j]=='@') ar[i][j]=cnt++;
                if(ch[j]=='@') st=cnt,ar[i][j]=cnt++;
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {

                if(ar[i][j]>0)
                {
                    //dane
                    if(ar[i][j+1]>0) add(ar[i][j],ar[i][j+1]);;
                    //bame
                    if(j-1>=0)
                    {
                        if(ar[i][j-1]>0) add(ar[i][j],ar[i][j-1]);
                    }

                    //opore
                    if(i-1>=0)
                    {
                        if(ar[i-1][j]>0) add(ar[i][j],ar[i-1][j]);
                    }
                    if(ar[i+1][j]>0) add(ar[i][j],ar[i+1][j]);
                }
            }
        }
        int ans=bfs(st);
        printf("Case %d: %d\n",tks,ans);
        clean(r,c);
    }
}
