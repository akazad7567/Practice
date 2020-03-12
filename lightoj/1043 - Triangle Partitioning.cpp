#include<bits/stdc++.h>
using namespace std;
const double eps=.00000001;
double AB,AC,BC,R1,R2;
double myfun()
{
    double AD,BD,AE,CE,DE,TRY_1,TRY_2,x,S;
    double high=AB,low=0.0,mid;
   // x=10.0;
    //AD=x.
    while(high-low>eps)
    {
      mid=(low+high)/2.0;
      AD=mid;
      AE=(AD*AC)/AB;
      DE=(AE*BC)/AC;
      S=(AD+DE+AE)/2.0;
      TRY_1=sqrt((S*(S-AD)*(S-AE)*(S-DE)));
      S=(AB+AC+BC)/2.0;
      TRY_2=sqrt((S*(S-AB)*(S-AC)*(S-BC)))-TRY_1;

      R2=TRY_1/TRY_2;
      if(R2<R1) low=mid;
      else high=mid;

     //cout<<TRY_1<<' '<<TRY_2<<' '<<mid<<' '<<R1<<' '<<R2<<endl;

    }
    return mid;


}

int main()
{
    int t,cas=0;
    scanf("%d",&t);
    while(t--){
    cas++;
    scanf("%lf %lf %lf %lf",&AB,&AC,&BC,&R1);
    //cout<<myfun()<<endl;
    printf("Case %d: %.7lf\n",cas,myfun());
    }
}
