// single source
void bfs(int src , vector<vector<int>> &g , int n) {

	queue<int> q; q.push(src);
	vector<bool> vis(n + 1 , 0);
	vis[src] = 1;

	while (!q.empty()) {

		auto cur = q.front();
		q.pop();

		for (int &node : g[cur]) {
			if (vis[node]) continue;
			vis[node] = 1;
		}
	}
}

// multisource bfs
void m_bfs(vector<int> &src , vector<vector<int>> &g , int n) {

	queue<int> q;
	vector<bool> vis(n + 1 , 0);
	for (auto &i : src) q.push(i) , vis[i] = 1;

	while (!q.empty()) {

		auto cur = q.front();
		q.pop();

		for (int &node : g[cur]) {
			if (vis[node]) continue;
			vis[node] = 1;
		}
	}
}
