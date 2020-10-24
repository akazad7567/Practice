#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        if(r<=c) cout<<((r-1)+(c-1)*r)<<'\n';
        else cout<<((c-1)+(r-1)*c)<<'\n';
    }
}
