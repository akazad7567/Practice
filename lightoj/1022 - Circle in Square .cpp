#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        double r,SA,CA;
        scanf("%lf",&r);
        SA=4.0*r*r;
        SA-=pi*r*r;
        printf("Case %d: %.2f\n",tks,SA);

    }
}
