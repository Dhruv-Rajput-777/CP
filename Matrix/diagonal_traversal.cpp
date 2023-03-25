// diagonal traversal in a grid (n * m)
// from bottom left to top right

// if grid dimensions are n * n,
// int m = n;

for (int row = 0 ; row < n ; row++) {
	int i = row , j = 0;
	while (i >= 0 and j < m) {
		// g[i][j]


		i-- , j++;
	}
}

for (int col = 1 ; col < m ; col++) {
	int i = n - 1 , j = col;
	while (i >= 0 and j < m) {
		// g[i][j]


		i-- , j++;
	}
}