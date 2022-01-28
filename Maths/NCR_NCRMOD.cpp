ll NCRMOD(ll n , ll r , int mod = mod) {
	if (n < r) return 0ll;
	ll num = fact[n];
	ll den = mod_mul(fact[r] , fact[n - r] , mod);
	return mod_div(num , den , mod);
}

ll NCR(ll n , ll r) {
	if (n < r) return 0ll;
	ll num = fact[n];
	ll den = fact[r] * fact[n - r];
	return num / den;
}

ll NCRMOD(ll n , ll r , int mod = mod) {
	if (n < r) return 0ll;
	ll num = fact(n);
	ll den = mod_mul(fact(r) , fact(n - r) , mod);
	return mod_div(num , den , mod);
}
