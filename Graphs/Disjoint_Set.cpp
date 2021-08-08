
const int maxN = 1;

int parent[maxN];
int rank[maxN];

int findParent(int node) {
	if (node == parent[node]) return node;
	return parent[node] = findParent(parent[node]);
}

void Union(int uu , int vv) {
	uu = findParent(uu);
	vv = findParent(vv);

	if (rank[uu] == rank[vv]) {
		parent[vv] = uu;
		rank[uu]++;
	} else {
		parent[max(uu, vv)] = min(uu, vv);
	}
}

void makeSet() {
	for (int i = 0 ; i < maxN ; i++) parent[i] = i;
	for (int i = 0 ; i < maxN ; i++) rank[i] = 0;
}