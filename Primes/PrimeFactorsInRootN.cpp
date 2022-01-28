vector<ll> pfs(ll n) {

	vector<ll> ans;
	for (ll i = 2 ; i * i <= n ; i++) {
		while (n % i == 0) {
			ans.pb(i);
			n /= i;
		}
	}

	if (n != 1) ans.pb(n);
	return ans;
}
