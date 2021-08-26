long long fastPow(long long base , long long exponent , long long MOD) {
	long long answer = 1;
	while (exponent) {
		if (exponent & 1) {
			answer = ((answer % MOD) * (base % MOD)) % MOD; exponent--;
		}
		else {
			base = ((base % MOD) * (base % MOD)) % MOD; exponent /= 2;
		}
	}
	return answer;
}