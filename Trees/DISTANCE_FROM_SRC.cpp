vector<int> distbfs(int src , vector<vector<int>> &g , int n) {

	queue<pair<int, int>> q;
	vector<int> dist(n + 1 , -1);
	vector<bool> vis(n + 1 , 0);

	q.push({src , 0}) , vis[src] = 1;

	while (!q.empty()) {

		auto cur = q.front();
		q.pop();

		for (int &node : g[cur.fi]) {
			if (!vis[node]) {
				q.push({node , cur.se + 1});
				vis[node] = 1;
			}
		}

		dist[cur.fi] = cur.se;
	}
	return dist;
}

// for multisource
// use initial distance as INT_MAX in dist
// dist[cur.fi] = min(cur.se , dist[cur.fi]); on line 21