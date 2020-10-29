
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/play-with-numbers-2/description/

#include<bits/stdc++.h>
using namespace std;

typedef long long int     ll;
typedef long double       ld;
typedef pair<int, int>    pii;
typedef vector<pii>       vpii;
typedef vector<int>       vi;

typedef pair<ll, ll>      pll;
typedef vector<pll>       vpll;
typedef vector<ll>        vl;

#define pb                push_back
#define mk                make_pair
#define mod               (int)1e9+7
#define inf               (ll)1e18
#define endl              "\n"
#define vs                vector<string>
#define ump               unordered_map
#define mp                map
#define pq_max            priority_queue<ll>
#define pq_min            priority_queue<ll,vi,greater<ll> >
#define ff                first
#define ss                second
#define mid(l, r)         (l+(r-l)/2)
#define loop(i, a, b)     for(int i = (a); i <= (b); i++)
#define looprev(i, a, b)  for(int i = (a); i >= (b); i--)
#define print(arr, a, b)  for(int i = (a); i <= (b); i++) cout << arr[i] << " ";
#define scan(arr, a, b)   for(int i = (a); i <= (b); i++) cin >> arr[i];


void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	file_i_o();

	ll n, q, a, b;
	cin >> n >> q;

	ll v[n + 1];

	v[0] = 0ll;
	loop(i, 1, n) {
		cin >> a;
		v[i] = v[i - 1] + a;
	}

	while (q--) {
		cin >> a >> b;
		cout << ll(v[b] - v[a - 1]) / (b - a + 1) << "\n";
	}

	return 0;
}
