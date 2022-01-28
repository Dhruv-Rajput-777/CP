void dfs(int cur , int par , vector<vector<int>> &g) {

	for (auto &node : g[cur]) {
		if (node != par) {
			dfs(node , cur, g);
		}
	}
}
