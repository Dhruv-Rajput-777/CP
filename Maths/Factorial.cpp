const int factN = 1e5;
vector<ll> fact(factN);

// factorial mod
void factorial() {
	fact[0] = fact[1] = 1;
	for (ll i = 2 ; i < factN ; i++) {
		fact[i] = mod_mul(fact[i - 1] , i , mod);
	}
}

void factorial() {
	fact[0] = fact[1] = 1;
	for (ll i = 2 ; i < factN ; i++) {
		fact[i] = fact[i - 1] * i;
	}
}

ll fact(ll n) {
	ll ans = 1;
	for (ll i = 0; i <= n ; i++) {
		ans *= i;
	}
	return ans;
}

ll fact(ll n) {
	ll ans = 1;
	for (ll i = 0; i <= n ; i++) {
		ans = mod_mul(ans , i , mod);
	}
	return ans;
}