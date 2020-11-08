
// https://www.codechef.com/LTIME89B/problems/SUBMEXS

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int dfs(vector<int> v[], int n, vector<bool> &visited, vi &count) {
	if (visited[n]) {
		return 0;
	}

	visited[n] = 1;
	int temp = 0;
	for (auto i : v[n]) {
		temp += dfs(v, i, visited, count);
	}

	count[n] = temp;
	return temp + 1;
}

ll solve(vi v[], int n, vector<bool> &visited, vi &count) {
	if (!visited[n]) {
		return 0;
	}

	visited[n] = 0;
	ll temp = 0;
	for (auto i : v[n]) {
		temp = max(temp, solve(v, i, visited, count));
	}

	return temp + count[n] + 1;
}

int32_t main() {
	file_i_o();

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> v(n + 1);
		loop(i, 2, n) {
			cin >> v[i];
		}

		vector<int> g[n + 1];
		loop(i, 2, n) {
			g[v[i]].pb(i);
			g[i].pb(v[i]);
		}
		vector<bool> visited(n + 1, 0);
		vector<int> count(n + 1, 0);
		dfs(g, 1, visited, count);

		cout << solve(g, 1, visited, count) << "\n";
	}

	return 0;
}





#else



typedef long long int     ll;
typedef long double       ld;
typedef pair<int, int>    pii;
typedef vector<pii>       vpii;
typedef vector<int>       vi;

typedef pair<ll, ll>      pll;
typedef vector<pll>       vpll;
typedef vector<ll>        vl;

#define pb                push_back
#define mp                make_pair
#define mod               (int)1e9+7
#define inf               (ll)1e18
#define endl              "\n"
#define vs                vector<string>
#define ump               unordered_map
// #define mp                map
#define pq_max            priority_queue<ll>
#define pq_min            priority_queue<ll,vi,greater<ll> >
#define ff                first
#define ss                second
#define mid(l, r)         (l+(r-l)/2)
#define loop(i, a, b)     for(int i = (a); i <= (b); i++)
#define looprev(i, a, b)  for(int i = (a); i >= (b); i--)
#define print(arr, a, b)  for(int i = (a); i <= (b); i++) cout << arr[i] << " ";


void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

#define declare
#include __FILE__
#endif