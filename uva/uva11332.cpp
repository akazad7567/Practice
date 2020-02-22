#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,n2,r1,r2,re=0;
while(cin>>n){
if(n==0) break;
while(n>9){
while(n>0)
{
    r1=n%10;
    r2=n/10;
    re+=r1;

    n=r2;
}

n=re;
re=0;

}
cout<<n<<'\n';
}
}
