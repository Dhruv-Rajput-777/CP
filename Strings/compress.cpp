string compress(string s) {
	string ans = "";
	if (s.empty()) return ans;
	char c = s[0] + 1;
	for (auto &i : s) {
		if (i != c) ans.pb(i) , c = i;
	}
	return ans;
}
