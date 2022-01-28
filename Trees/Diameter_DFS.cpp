
void dfs(int cur , int par , vector<vector<int>> &g , pair<int, int> &node , int dist = 0) {

	if (node.se < dist) {node.se = dist , node.fi = cur;}

	for (auto &i : g[cur]) {
		if (i == par) continue;
		dfs(i , cur , g , node , dist + 1);
	}

}

// call in main function
// node.fi = node with max dist
// node.se = dist
pair<int, int> node = { -1, -1};
dfs(0 , -1 , g , node);
dfs(node.fi , -1 , g , node);
cout << node.se; line;