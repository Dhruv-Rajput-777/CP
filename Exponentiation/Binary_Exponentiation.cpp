long long fastPow(long long base , long long exponent) {
	long long answer = 1;
	while (exponent) {
		if (exponent & 1) {
			answer *= base; exponent--;
		}
		else {
			base *= base; exponent /= 2;
		}
	}
	return answer;
}
