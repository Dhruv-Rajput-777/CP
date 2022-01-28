void rotate(vector<vector<int>> &a, int n)
{
	vector<vector<int>> t = a;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			t[i][j] = a[j][n - 1 - i];
		}
	}
	a = t;
}

void flip(vector<vector<int>> &a , int n , int m) {
	for (auto &i : a) reverse(all(i));
}

