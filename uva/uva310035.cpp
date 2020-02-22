#include<bits/stdc++.h>
using namespace std;

int main(){
int r1,r2,r3,r4,re=0,res=0;
 int arr[1000]={0},arr2[1000]={0};
 int i=0,j=0,l=10,k;
 long long int a,b,c;
while(scanf("%d %d",&a,&b))
{
    if(a==0 && b==0) break;
    //cout<<a<<ends<<b<<endl;
    while(a){
    r1=a%l;
   a=a/l;
   arr[i]=r1;
   //cout<<r1<<ends;

   i++;

    }

    while(b){
   r2=b%l;
   b=b/l;
   arr2[j]=r2;
   //cout<<arr2[j]<<ends;
   j++;

    }
    c=max(i,j);
   // cout<<c<<endl;
    for(k=0;k<c;k++){
   if((arr[k]+arr2[k])>=10)
   {
      //cout<<arr[k]<<ends<<arr2[k]<<endl;
     // cout<<"inner"<<arr[k]<<ends<<arr2[k]<<endl;
      re=(arr[k]+arr2[k])/10;
       arr[k+1]=arr[k+1]+re;
       res++;
       //cout<<res<<endl;
       arr[k]=0,arr2[k]=0;

   }
    arr[k]=0,arr2[k]=0;
    }
    arr[k]=0,arr2[k]=0;
    if(res<=0) cout<<"No carry operation."<<'\n';
    else if(res==1)
    cout<<res<<" "<<"carry operation."<<'\n';
    else cout<<res<<" "<<"carry operations."<<'\n';

    res=0;
    i=0,j=0;
    //arr[1000]={0},arr2[1000]={0};


}

}
