#include <iostream>

using namespace std;
typedef unsigned long long LL;

int main() {
	// your code goes here
	int n;
  LL a,b,c=0,d=0,e;
int j=1;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
	while(a!=b)
	{
		a=a>>1;
		b=b>>1;
		c++;//count highest number of digit between a and b;
	}
	for(int i=0;i<c;i++)
	{
		a=a<<1;//Working for AND
		 b=(b<<1)|1;//working for OR
		 //cout<<b<<endl;
	}
	cout<<"Case "<<j++<<": "<< b<<" "<<a<<endl;
	c=0;

	}

	return 0;
}
