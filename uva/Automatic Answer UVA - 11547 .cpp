#include<cmath>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld", &n);
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
       // cout<<"n = "<<n<<endl;
        n /= 10;
        printf("%d\n", (int) abs(n % 10));
    }
}
