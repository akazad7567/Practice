#include<bits/stdc++.h>
using namespace std;
#define MAX 1005550
#define MAXN 20
long long st[MAX][MAXN];
long long ar[MAX];
int lg[MAX];

void init()
{
    for(int i=2;i<MAX;i++)
    {
       lg[i]=lg[i/2]+1;
    }

}

void sparse_table(int N,int K)
{
    for(int i=0;i<N;i++) st[i][0]=ar[i];

    for(int j=1;j<K;j++)
    {
        for(int i=0;i<N;i++)
        {
            st[i][j]=min(st[i][j-1],st[i+(1<<j-1)][j-1]);
        }
    }
}

long long get(int l,int r)
{
    int j=lg[r-l+1];

    long long ans=min(st[l][j],st[r-(1<<j)+1][j]);
    return ans;
}

int main()
{
    init();
    int n,k;
    scanf("%d",&n);
    k=log2(n)+1;

    for(int i=0;i<n;i++) scanf("%lld",&ar[i]);
    sparse_table(n,k);
    int q;
    scanf("%d",&q);

    while(q--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%lld\n",get(l,r));
    }
}
