const int maxN = 1e5 + 1;
bool prime[maxN];
vector<ll> pvec;
vector<ll> sieve() {

	fill(prime , prime + maxN , 1);
	int range = sqrt(maxN);
	prime[0] = prime[1] = false;
	for (int i = 2 ; i <= range; i++) {
		if (prime[i]) {
			for (int j = i * i ; j < maxN ; j += i) {
				prime[j] = 0;
			}
		}
	}
	fr(i , 0 , maxN) if (prime[i]) pvec.pb(i);
	return pvec;
}