
// https://atcoder.jp/contests/dp/tasks/dp_g

#include<bits/stdc++.h>
using namespace std;

#ifdef declare
#define mxa (int)1e5 + 5

int solve(vi v[], int n, vi &dp) {
	if (dp[n] != -1)
		return dp[n];
	int temp = 0;
	for (auto i : v[n]) {
		temp = max(temp, solve(v, i, dp));
	}
	return dp[n] = temp + 1;
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, e, a, b;
	cin >> n >> e;
	vector<int> v[mxa];

	flu(i, 0, e) {
		cin >> a >> b;
		v[a].pb(b);
	}

	vi dp(mxa, -1);

	int ma = 0;

	flu(i, 1, n + 1) {
		ma = max(ma, solve(v, i, dp));
	}

	cout << ma - 1 << "\n";

	return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

#define declare
#include __FILE__
#endif