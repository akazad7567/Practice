#include <bits/stdc++.h>
using namespace std;

#define FI freopen ("in.txt", "r", stdin)
#define FO freopen ("out.txt", "w", stdout)

typedef long long Long;


Long gcd (Long a, Long b, Long &x , Long &y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	Long x1, y1;
	Long d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

bool find_any_solution (Long a, Long b, Long c, Long & x0, Long & y0, Long & g) {
	g = gcd (abs(a), abs(b), x0, y0);
	if (c % g != 0)  // if c%gcd(a,b) ==1 then there is no solution (explained before)
		return false;
	x0 *= c / g;   //from dLinear Diophantine Equation we know that, x=x0+(kb/gcd(a,b)) and y=y0-(ka/gcd(a,b)) where k=1,2,......
	y0 *= c / g;
	if (a < 0)   x0 *= -1;
	if (b < 0)   y0 *= -1;
	return true;
}

void shift_solution (Long & x, Long & y, Long a, Long b, Long cnt) {
	x += cnt * b;//shift next value of x
	y -= cnt * a;//shift next value of y by increasing x and decreasing y
}

Long find_all_solutions (Long a, Long b, Long c, Long minx, Long maxx, Long miny, Long maxy) {
	Long x, y, g;
	if (! find_any_solution (a, b, c, x, y, g)) return 0;
	a /= g;  b /= g;
	Long sign_a = a > 0 ? +1 : -1;
	Long sign_b = b > 0 ? +1 : -1;
	shift_solution (x, y, a, b, (minx - x) / b);
	if (x < minx)
		shift_solution (x, y, a, b, sign_b);
	if (x > maxx) return 0;
	Long lx1 = x;
	shift_solution (x, y, a, b, (maxx - x) / b);
	if (x > maxx)
		shift_solution (x, y, a, b, -sign_b);
	Long rx1 = x;
	shift_solution (x, y, a, b, - (miny - y) / a);
	if (y < miny)
        shift_solution (x, y, a, b, -sign_a);
	if (y > maxy) return 0;
	Long lx2 = x;
	shift_solution (x, y, a, b, - (maxy - y) / a);
	if (y > maxy)
		shift_solution (x, y, a, b, sign_a);
	Long rx2 = x;
	if (lx2 > rx2) swap (lx2, rx2);
	Long lx = max (lx1, lx2);
	Long rx = min (rx1, rx2);
	return (rx - lx) / abs(b) + 1;//initial solution to a diaphantine equation
	//(max_x-min_y)/b+1;
}

int main() {
   // FI;
   ios::sync_with_stdio(false);
   cin.tie(0);
    int test;
    cin>>test;
    int cs=0;
    while(test--){

        Long a , b , c , p ;
       cin>>a>>b>>c>>p;
        Long g = __gcd(__gcd(a,b),c);//find gcd(a,b,c)
        a /= g , b /= g , c /= g ;//find common factor of a,b,c;
        printf("Case %d: ",++cs);
        if( p % g != 0 ){  // if( p%gcd(a,b,c)==1 then there is no solution example bellow
                                    //12x+21y=80 =>3(4x+7y)=80 =>4x+7y=80/3 { 4x+7y is an integer but 80/3 is not an integer
                                 //by contradiction there are no integer solution to the equation
            printf("0\n");
            continue ;
        }
        p /= g ;//find common factor of p
        // ax + by + cz = p
        // ax + by = ( p - cz )
        // ax + by = q  ; [ q = p - cz ]
        Long z = 0 , Ans = 0 ;
        while( true ) {
            Long q = p - c * z ;//look upon
            if( q < 0 ) break ;
            Ans += find_all_solutions(a,b,q,0,p,0,p);
            z++;
        }
        printf("%lld\n",Ans);
    }

}
