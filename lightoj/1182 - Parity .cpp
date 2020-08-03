#include<bits/stdc++.h>
using namespace std;

int findParity(int n)
{
    int cnt=0;
    while(n)
    {
        if(n & 1) cnt++;
        n/=2;
    }
    return cnt;
}
int main()

{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        if(findParity(n) & 1) printf("Case %d: odd\n",i);
        else printf("Case %d: even\n",i);
    }
}
