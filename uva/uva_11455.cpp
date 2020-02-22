#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool square(LL a[])
{
    //rectangle(a);
    if(a[0]==a[1] && a[0]==a[2]&&a[0]==a[3]) return true;
    else return false;
}
bool rectangle(LL a[])
{
    sort(a,a+4);
    if(a[0]==a[1]&&a[2]==a[3]) return true;
   // else quadrangle(a);
   else return false;
}
bool quadrangle(LL b[])
{
    sort(b,b+4);
    if(b[3]<b[0]+b[1]+b[2]) return true;
    else return false;

}
int main()
{
    LL n;
    cin>>n;
    while(n--){
    LL arr[4];
    for(int i=0;i<4;i++) cin>>arr[i];
    bool b=square(arr);
    if(b) cout<<"square"<<'\n';
    else
    {
        b=rectangle(arr);
        if(b) cout<<"rectangle"<<'\n';
        else
        {
            b=quadrangle(arr);
            if(b) cout<<"quadrangle"<<'\n';
            else cout<<"banana"<<'\n';

        }
    }
    }
    return 0;
}
