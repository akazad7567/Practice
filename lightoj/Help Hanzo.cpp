#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=46350;
bool chk[46360];
vector<ll>prime;

void sieve()
{
    chk[1]=true;
    chk[0]=true;
    for(ll i=3;i<=M;i+=2)
    {
        for(ll j=i*i;j<=M;j+=i*2)
        {
            chk[j]=true;
        }
    }
    for(ll i=4;i<=M;i+=2)
    {
        chk[i]=true;
    }
    prime.push_back(2);

    for(ll i=3;i<=M;i+=2)
    {
        if(chk[i]==false) prime.push_back(i);
    }
}

ll segmentedSieve(ll a,ll b)
{
    ll n=b;
    ll cnt=0;
	// Compute all primes smaller than or equal
	// to square root of n using simple sieve
	ll limit = a+1;
//	vector<ll> prime;
//	prime.reserve(limit);
//	simpleSieve(limit, prime);

	// Divide the range [0..n-1] in different segments
	// We have chosen segment size as sqrt(n).
	ll low = limit;
	ll high = 2*limit;

	// While all segments of range [0..n-1] are not processed,
	// process one segment at a time

	while (low < n)
	{

		if (high >= n){
		high = n;
		}


		// To mark primes in current range. A value in mark[i]
		// will finally be false if 'i-low' is Not a prime,
		// else true.
		bool mark[high-limit+2];
		memset(mark, true, sizeof(mark));

		// Use the found primes by simpleSieve() to find
		// primes in current range
		for (ll i = 0; i < prime.size(); i++)
		{
			// Find the minimum number in [low..high] that is
			// a multiple of prime[i] (divisible by prime[i])
			// For example, if low is 31 and prime[i] is 3,
			// we start with 33.
			ll loLim = floor(low/prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			/* Mark multiples of prime[i] in [low..high]:
				We are marking j - low for j, i.e. each number
				in range [low, high] is mapped to [0, high-low]
				so if range is [50, 100] marking 50 corresponds
				to marking 0, marking 51 corresponds to 1 and
				so on. In this way we need to allocate space only
				for range */
			for (ll j=loLim; j<=high; j+=prime[i])
				mark[j-low] = false;
		}

		// Numbers which are not marked as false are prime
		for (ll i = low; i<=high; i++)
			if (mark[i - low] == true)
				cnt++;

		// Update low and high for next segment
		low = low + limit;
		high = high + limit;
	}
	return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    ll t,tks=0;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=0;
        if(a<=M)
        {
            for(ll i=a;i<=min(M,b);i++)
            {
                if(chk[i]==false) ans++;
            }
        }
        ll lef;
        if(a>M) lef=a-1;
        else lef=M;

        ans+=segmentedSieve(lef,b);
        cout<<"Case "<<++tks<<": "<<ans<<endl;

    }
}
