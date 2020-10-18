
// https://atcoder.jp/contests/dp/tasks/dp_e

#include<bits/stdc++.h>
using namespace std;

#ifdef declare
#define ma (int)1e5 + 1

struct node {
	ll w, v;
};

ll solve(vector<node> v, int n, int w) {
	vector<ll> dp(ma + 1, INT_MAX);
	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = ma; j >= v[i - 1].v; j--) {
			if (dp[j - v[i - 1].v] != INT_MAX)
				dp[j] = min(dp[j], dp[j - v[i - 1].v] + v[i - 1].w);
		}
	}

	int ans = 0;

	for (int i = ma - 1; i >= 0; i--) {
		if (dp[i] <= w) {
			return i;
		}
	}
	return ans;
}

int32_t main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n, w;
	cin >> n >> w;

	vector<node> v(n);
	flu(i, 0, n) {
		cin >> v[i].w >> v[i].v;
	}

	cout << solve(v, n, w) << "\n";

	return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector< vector<ll> > vvl;
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