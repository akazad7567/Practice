// C++ program to find multiplicative modulo inverse using
// Extended Euclid algorithm.
#include<iostream>
using namespace std;

// C function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y);
int c,xx1, xx2, yy1, yy2;
// Function to find modulo inverse of a
void modInverse(int a, int m,int c)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (c%g!=0)
        cout << "Inverse doesn't exist";
    else
    {
        cout<<x<<' '<<y<<endl;
        // m is added to handle negative x
        int res = (x%m + m) % m;
        int v1=0,v2=0,v3=0,v4=0;
        int rt1=m/g;
        int rt2=a/g;
        int ans1=0, ans2=0;

        if(xx1<0 and xx2>=0)
        {
            v1=xx1/rt1;
            v1=v1*-1;
            v2=xx2/rt1;
            ans1=v1+v2;
        }
        else
        {
            if(xx1<0) xx1*=-1,xx2*=-1;
            v1=(xx1-1)/rt1;
            v2=xx2/rt1;
            ans1=(v2-v1);
        }

        if(yy1<0 and yy2>=0)
        {
            v1=yy1/rt1;
            v1=v1*-1;
            v2=yy2/rt1;
            ans2=v1+v2;
        }
        else
        {
            if(yy1<0) yy1*=-1,yy2*=-1;
            v1=(yy1-1)/rt2;
            v2=yy2/rt2;
            ans2=v2-v1;
        }
        cout<<min(ans1,ans2)<<endl;
//        cout << "Modular multiplicative inverse is " << res<<endl;
    }
}

// C function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

// Driver Program
int main()
{
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int A, B, C;
        cin>>A>>B>>C>>xx1>>xx2>>yy1>>yy2;
        modInverse(A, B,C);
    }

    return 0;
}
