vector<vector<int>> up;
int LOG = 19;

void buildUp(int n, vector<int>& parent) {

    up = vector<vector<int>> (19 , vector<int>(n, -1));

    for (int i = 0 ; i < LOG ; i++) {
        for (int j = 0 ; j < n; j++) {

            if (i == 0) {
                up[i][j] = parent[j];
                continue;
            }

            int p1 = up[i - 1][j];
            if (p1 == -1) continue;
            up[i][j] = up[i - 1][p1];
        }

    }
}

int getAnst(int node, int k) {

    for (int i = LOG ; i >= 0 ; i--) {
        if ((1 << i) <= k) {
            if (node == -1) break;
            node = up[i][node];
            k -= (1 << i);
        }
    }

    return node;
}