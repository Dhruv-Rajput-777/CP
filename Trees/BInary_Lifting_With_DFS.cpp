vector<vector<int>> up, adj;
vector<int> depth;
int LOG = 19;

void dfs(int cur, int par) {
    for (auto &i : adj[cur]) {
        if (i == par) continue;
        depth[i] = depth[cur] + 1;
        up[i][0] = cur;
        for (int j = 1; j < LOG ; j++) {
            up[i][j] = up[up[i][j - 1]][j - 1];
        }
        dfs(i , cur);
    }
}


int getAnst(int node, int k) {
    if (depth[node] < k) return -1;
    for (int i = LOG ; i >= 0 ; i--) {
        if ((1 << i) <= k) {
            node = up[node][i];
            k -= (1 << i);
        }
    }
    return node;
}