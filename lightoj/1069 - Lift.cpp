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
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",tks,(19+abs(a-b)*4+a*4));
    }
}
