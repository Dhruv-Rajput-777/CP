bool isPal (string t) {
	int n = t.size();
	fr(i , 0 , n) {
		if (t[i] != t[n - i - 1]) return false;
	}
	return true;
}