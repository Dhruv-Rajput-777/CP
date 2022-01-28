vector<vector<int>> dp;

int LCS(string a , string b) {
	int an = a.size() , bn = b.size();
	dp.resize(an + 1); for (auto &i : dp) i.resize(bn + 1);
	for (auto &i : dp) for (auto &j : i) j = 0;

	for (int i = 0 ; i <= an ; i++) {
		for (int j = 0 ; j <= bn ; j++) {
			if (i == 0 or j == 0) {
				dp[i][j] = 0; continue;
			}

			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			} else {
				dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
			}
		}
	}
	return dp[an][bn];
}

string printLCS(string a , string b) {
	int an = a.size() , bn = b.size();

	int i = an , j = bn;
	string ans = "";

	while (i > 0 and j > 0) {

		if (a[i - 1] == b[j - 1]) {
			ans.pb(a[i - 1]);
			i-- , j--; continue;
		}

		if (dp[i - 1][j] > dp[i][j - 1]) {
			i--;
		} else {
			j--;
		}

	}

	reverse(ans.begin() , ans.end());
	return ans;
}