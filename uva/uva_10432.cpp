#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1.);
typedef long long ll;
int main()
{
    double r,n;
    while(scanf("%lf %lf",&r,&n)==2)
    {
        double area,d,d2;
        d=(2*pi)/n;
        //d2=(3.1416/180)*d;
        d=sin(d);
        area=.5*n*r*r*d;
        printf("%.3f\n",area);
    }
}
