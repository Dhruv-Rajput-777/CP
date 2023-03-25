const int maxN = 1e5 + 1;
bool prime[maxN];
vector<ll> pvec;
void sieve() {

	fill(prime , prime + maxN , 1);
	prime[0] = prime[1] = false;

	for (long long i = 2 ; i * i < maxN ; i++) {
		if (prime[i]) {
			for (long long j = i * i ; j < maxN ; j += i) {
				prime[j] = 0;
			}
		}
	}
	fr(i , 0 , maxN) if (prime[i]) pvec.pb(i);
}