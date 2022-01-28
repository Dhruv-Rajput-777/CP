// segTree st = segTree(a , n);
// st.update(start,end,l,r)
// st.query(start,end,l,r);

class segTree {

public:
	vector<int> seg;

	segTree(vector<int>&a, int n) {
		seg.resize(4 * n);
		build(a, 0 , n - 1);
	}

	void build(vector<int> &a, int start, int end, int idx = 0) {

		if (start == end) {
			seg[idx] = a[start];
			return;
		}

		int mid = (start + end) / 2;
		build(a, start, mid, idx * 2 + 1);
		build(a, mid + 1, end, idx * 2 + 2);

		seg[idx] = min(seg[idx * 2 + 1], seg[idx * 2 + 2]);
	}

	void update(int start, int end , int upd , int val , int idx = 0) {
		if (upd == start and upd == end) {
			seg[idx] = val;
			return;
		}

		// upd lies outside l and r
		if (upd < start or upd > end) return;

		// upd lies insider l and r
		int mid = (start + end) / 2;
		update(start , mid , upd , val, idx * 2 + 1);
		update(mid + 1 , end, upd , val, idx * 2 + 2);
		seg[idx] = min(seg[idx * 2 + 1], seg[idx * 2 + 2]);
	}

	int query(int start, int end, int l, int r, int idx = 0) {

		// current seg completely lies inside l and r
		if (start >= l and end <= r) {
			return seg[idx];
		}

		// current seg lies outside l and r
		if (start > r or end < l) {
			return INT_MAX;
		}

		// current seg overlaps with l , r
		int mid = (start + end) / 2;
		return min(query(start , mid , l , r , idx * 2 + 1),
		           query(mid + 1, end , l , r , idx * 2 + 2));
	}

};