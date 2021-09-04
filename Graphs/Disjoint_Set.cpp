// DSU name = DSU(size);

class DSU {

public:
	vector<int> RANK;
	vector<int> PARENT;

public:
	DSU(int size) {
		RANK.resize(size); PARENT.resize(size);
		for (int i = 0 ; i < size ; i++) PARENT[i] = i;
		for (int i = 0 ; i < size ; i++) RANK[i] = 0;
	}

	int findParent(int node) {
		if (node == PARENT[node]) return node;
		return PARENT[node] = findParent(PARENT[node]);
	}

	void Union(int uu , int vv) {
		uu = findParent(uu);
		vv = findParent(vv);

		if (RANK[uu] == RANK[vv]) {
			PARENT[vv] = uu;
			RANK[uu]++;
		} else {
			PARENT[max(uu, vv)] = min(uu, vv);
		}
	}
};