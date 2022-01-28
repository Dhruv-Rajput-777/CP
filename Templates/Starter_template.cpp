// Author : Dhruv Rajput
#include<bits/stdc++.h>
using namespace std;

// erase wont work with less_equal..take erase func from stackoverflow
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds;

typedef long long ll;
typedef unsigned long long ull;
typedef double lld;
const int mod = 1e9 + 7;

#define FASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define fr(i,s,e)     for(int i=s;i<e;++i)
#define rfr(i,s,e)    for(int i=s;i>=e;--i)
#define rep(i,s,e,d)  for(int i=s;i<e;i+=d)
#define rrep(i,s,e,d) for(int i=s;i>=e;i-=d)

#define fi      first
#define se      second
#define MP      make_pair
#define pb 	    push_back
#define line    cout<<"\n";
#define all(x)  (x).begin(),(x).end()
#define sz(x)   ((int)(x).size())
#define precise cout<<fixed<<setprecision(10);

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(ull t) {cerr << t;}

#ifndef ONLINE_JUDGE
#define d(x)      cerr<<#x<<" : ";_print(x);cerr<<"\n";
#define d2(x,y)   cerr<<#x<<" : ";_print(x);cerr<<" , ";cerr<<#y<<" : ";_print(y);cerr<<"\n";
#define d3(x,y,z) cerr<<#x<<" : ";_print(x);cerr<<" , ";cerr<<#y<<" : ";_print(y);cerr<<" , ";cerr<<#z<<" : ";_print(z);cerr<<"\n";
#define linerr cerr<<"\n";
#else
#define d(x);
#define d2(x,y);
#define d3(x,y,z);
#define linerr;
#endif

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(multimap <T, V> v);

template <class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.fi); cerr << " , "; _print(p.se); cerr << " }";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "\n"; for (auto i : v) {_print(i); cerr << "\n";}}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "\n"; for (auto i : v) {_print(i); cerr << "\n";}}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

ll expo(ll a, ll b, ll mod = mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}

ll mod_add(ll a, ll b, ll m = mod) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m = mod) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m = mod) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m = mod) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
lld sqrt(lld n) {lld lb = 0 , ub = 1e9; ll cnt = 100; while (lb <= ub) {lld mid = lb + (ub - lb) / 2; if (mid * mid == n) return mid; if (mid * mid < n) lb = mid; else ub = mid; if (cnt-- < 0) return mid;}}
ll sqrt(ll n) {ll lb = 0 , ub = 1e9; ll cnt = 100; while (lb <= ub) {ll mid = lb + (ub - lb) / 2; if (mid * mid == n) return mid; if (mid * mid < n) lb = mid; else ub = mid; if (cnt-- < 0) return mid;}}
ll pow(ll a, ll b) {ll res = 1ll; while (b > 0) {if (b & 1)res = (res * a); a = (a * a); b = b >> 1;} return res;}




void solve() {



}

int main() {

	FASTIO();

#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int test_cases = 1;
	cin >> test_cases;

	for (int tc = 1 ; tc <= test_cases ; tc++) {
#ifndef ONLINE_JUDGE
		cerr << "tc : " << tc << "\n";
#endif
		solve();
#ifndef ONLINE_JUDGE
		cerr << "\n";
#endif
	}

	return 0;
}