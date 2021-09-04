void dfs(int node , int parent , vector<vector<int>> &adj) {
	// cout << node << " ";
	for (auto i : adj[node]) {
		if (i != parent) {
			dfs(i , node , adj);
		}
	}
}
