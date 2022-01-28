// DSU name = DSU(size);

class DSU {

public:
	vector<int> RANK;
	vector<int> PARENT;

public:
	DSU(int size) {
		size++;
		RANK.resize(size); PARENT.resize(size);
		for (int i = 0 ; i < size ; i++) PARENT[i] = i;
		for (int i = 0 ; i < size ; i++) RANK[i] = 0;
	}

	int findParent(int node) {
		if (node == PARENT[node]) return node;
		return PARENT[node] = findParent(PARENT[node]);
	}

	void Union(int u , int v) {
		u = findParent(u);
		v = findParent(v);

		if (RANK[u] == RANK[v]) {
			PARENT[v] = u;
			RANK[u]++;
		} else if (RANK[u] < RANK[v]) {
			PARENT[u] = v;
		} else {
			PARENT[v] = u;
		}
	}
};