// 1D
vector<int> pf = a;
for (int i = 1 ; i < n; i++) pf[i] += pf[i - 1];



// 2D
vector<vector<int>> pf(n + 1 , vector<int>(n + 1, 0));
for (int i = 1 ; i <= n ; i++) {
	for (int j = 1; j <= n; j++) {
		if (a[i - 1][j - 1] == '*') pf[i][j]++;
		pf[i][j] += pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
	}
}