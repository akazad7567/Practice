#include<bits/stdc++.h>
using namespace std;
const double eps=1e-12;
const double PI=3.14159265359;

int main()
{
    int t,n;
    scanf("%d",&t);
    int tks=0;
    while(t--)
    {
        tks++;
        double R,thta1,thta2;
        scanf("%lf %d",&R,&n);
        thta1=360.0/(n*1.0);
        //cout<<thta1<<endl;
        double low=0.0,high=360.0,mid,r;
       while(high-low>eps){
            mid=(high+low)/2.0;
            r=mid;
            thta2=acos(((R*R)-(2*R*r)-(r*r))/((R-r)*(R-r)));
            thta2 = thta2 * (180.0/PI);
            if(thta2<thta1) low=mid;
            else high=mid;
            //cout<<mid<<' '<<thta2<<endl;
        }
        //cout<<mid<<endl;

        cout<<fixed;
        cout<<"Case "<<tks<<": ";
        cout<<setprecision(10)<<mid<<endl;
        //printf("%.5f\n",mid);

    }
}

