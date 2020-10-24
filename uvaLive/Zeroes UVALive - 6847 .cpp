#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
int main()
{
LL h,L;
while(cin>>L>>h &&L+h)
{
L-=L%5;
cout<<((h-L)/5)+1<<"\n";
}
return 0;
}
