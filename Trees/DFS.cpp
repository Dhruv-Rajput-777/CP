void dfs(int cur , int par , vector<vector<int>> &g) {

	for (auto &i : g[cur]) {
		if (i == par) continue;
		dfs(i , cur , g);
	}
}
