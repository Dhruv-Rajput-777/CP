#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double dbl;
const int mod = 1e9 + 7;

#define v           vector
#define d(x)        cout<<#x<<" = "<<x<<"\n"
#define d2(x,y)     cout<<#x<<" = "<<x<<"  "<<#y<<" = "<<y<<"\n";
#define d3(x,y,z)   cout<<#x<<" = "<<x<<"  "<<#y<<" = "<<y<<"  "<<#z <<" = "<<z<<"\n";
#define d4(x,y,z,a) cout<<#x<<" = "<<x<<"  "<<#y<<" = "<<y<<"  "<<#z <<" = "<<z<<"  "<<#a<<" = "<<a<<"\n";
#define rep(i,n)    for(int i=0;i<n;++i)
#define fr(i,s,e)   for(int i=s;i<e;++i)
#define rfr(i,s,e)  for(int i=s;i>=e;--i)
#define fi          first
#define se          second
#define MP          make_pair
#define pb 	        push_back
#define maxint      1e9+1
#define minint      -1e9-1
#define test        cout<<"\nTEST_LINE\n"
#define line        cout<<"\n"
#define ln          "\n";
#define all(x)      x.begin(),x.end()
#define prtvec(x)	cout<<#x<<" : ";for(auto i:x)cout<<i<<' ';line;



void solve() {

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	auto start = chrono::high_resolution_clock::now();

	int test_cases = 1;
	cin >> test_cases;
	while (test_cases--) {solve();}

	auto end = chrono::high_resolution_clock::now();
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	line;
	cout << "Execution Time : " << fixed << setprecision(4) << time_taken << " s" << ln;
	return 0;
}
