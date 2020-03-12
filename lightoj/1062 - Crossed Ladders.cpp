#include<bits/stdc++.h>
#define sqr(x) (x)*(x)
//#define EPS 1e-8
using namespace std;
typedef long long ll;
const double eps=1e-12;


int main()
{
    int t,Case=0;
    scanf("%d",&t);
    while(t--)
    {
        Case++;
        double x,y,c;
        scanf("%lf %lf %lf",&x,&y,&c);

        double low,high,mid,h,h1,h2,tmp_h;
        low=0.0,high=max(x,y);

        while(high-low>=eps)
        {
            mid=(low+high)/2.0;
            h1=sqrt(sqr(y)-sqr(mid));
            h2=sqrt(sqr(x)-sqr(mid));
            /// 1/h=(1/h1)+(1/h2) so,

            tmp_h=(1.0/h1)+(1.0/h2);
            tmp_h=(1.0/tmp_h);

            if(tmp_h>=c) low=mid;///h1=sqrt(sqr(y)-sqr(mid)) and h2=sqrt(sqr(x)-sqr(mid))
                                 /// tmp_h value to be bigger when mid or width of the street are smallest
                                 /// so, if mid value is small then we search its right position
            else high=mid;
        }
        printf("Case %d: %.10f\n",Case,low);


    }

}

