#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t1,t2,t3,arr[100],arr2[100];
    for(int i=0;n>9;i++)
    {
        t1=n%10;
        n=n/10;
        arr[i]=t1;
        arr2[i]=t2;

    }
    int m[40],s;
    for(int j=0;j<32;j++)
    {
        m[j]=ceil(pow(2,j))-1;
        //s=s-1;

        cout<<m[j]<<endl;
    }

}
