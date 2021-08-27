// Author : Dhruv Rajput
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double dbl;
const int mod = 1e9 + 7;

#define FASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define fr(i,s,e)     for(int i=s;i<e;++i)
#define rfr(i,s,e)    for(int i=s;i>=e;--i)
#define rep(i,s,e,d)  for(int i=s;i<e;i+=d)
#define rrep(i,s,e,d) for(int i=s;i>=e;i-=d)

#define fi     first
#define se     second
#define MP     make_pair
#define pb 	   push_back
#define line   cout<<"\n";
#define all(x) (x).begin(),(x).end()
#define sz(x)  ((int)(x).size())

#define d(x)      cout<<#x<<" : ";_print(x);cout<<"\n";
#define d2(x,y)   cout<<#x<<" : ";_print(x);cout<<" , ";cout<<#y<<" : ";_print(y);cout<<"\n";
#define d3(x,y,z) cout<<#x<<" : ";_print(x);cout<<" , ";cout<<#y<<" : ";_print(y);cout<<" , ";cout<<#z<<" : ";_print(z);cout<<"\n";

void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {cout << "{ "; _print(p.fi); cout << " , "; _print(p.se); cout << " }";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "\n"; for (auto i : v) {_print(i); cout << "\n";}}

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m






void solve() {



}

int main() {

	FASTIO();

	int test_cases = 1;
	cin >> test_cases;
	while (test_cases--) solve();

	return 0;
}