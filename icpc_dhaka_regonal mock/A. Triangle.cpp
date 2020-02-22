#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b and a==c)
    {
        cout<<"Equilateral Triangle\n";
        return 0;
    }
    if(a==b || a==c || b==c)
    {
         cout<<"Isosceles Triangle\n";
        return 0;
    }
    else cout<<"Bad Triangle\n";
}
