string NosToBin(int n) {
	if (n == 0) return "0";
	string t = "";
	while (n) {
		if (n & 1) t.pb('1');
		else t.pb('0');
		n >>= 1;
	}
	reverse(all(t));
	return t;
}

int binToNos (string t) {
	int n = t.size(), x = 1, ans = 0;
	rfr(i , n - 1 , 0) {
		if (t[i] == '1') ans += x;
		x <<= 1;
	}
	return ans;
}