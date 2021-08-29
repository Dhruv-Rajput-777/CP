const int maxN = 1;

int PARENT[maxN];
int RANK[maxN];

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

void makeSet() {
	for (int i = 0 ; i < maxN ; i++) PARENT[i] = i;
	for (int i = 0 ; i < maxN ; i++) RANK[i] = 0;
}
