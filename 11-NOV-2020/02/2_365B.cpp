
// http://codeforces.com/problemset/problem/365/B

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

	int n;
	cin >> n;

	vi v(n);
	loop(i, 0, n - 1) {
		cin >> v[i];
	}

	int count = 2, ma = min(2, n);

	loop(i, 2, n - 1) {
		if (v[i] == v[i - 1] + v[i - 2])
			count++;
		else
			count = 2;
		ma = max(count, ma);
	}

	cout << ma << "\n";

	return 0;
}