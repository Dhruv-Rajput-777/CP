vector<bool> visited;
stack<int> topo_st;

void dfs(vector<int> adj_list[] , int curNode) {

	visited[curNode] = 1;

	for (auto node : adj_list[curNode]) {
		if (!visited[node]) {
			dfs(adj_list , node);
		}
	}

	topo_st.push(curNode);
}

vector<int> topologicalSortDFS(vector<int> adj_list[] , int noOfVertices) {

	vector<int> ans;

	visited.resize(noOfVertices);
	fill(visited.begin() , visited.end() , 0);

	// for disconnected graph
	for (int i = 0 ; i < noOfVertices ; i++) {
		if (!visited[i]) {
			dfs(adj_list , i);
		}
	}

	while (!topo_st.empty()) {
		ans.push_back(topo_st.top());
		topo_st.pop();
	}
	return ans;
}
