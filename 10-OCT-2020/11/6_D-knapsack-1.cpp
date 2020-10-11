
// https://atcoder.jp/contests/dp/tasks/dp_d

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

struct node {
	ll w, v;
};

ll solve(vector<node> v, int n, int w) {
	vvl dp(n + 1, vector<ll>(w + 1));

	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= w; i++)
		dp[0][i] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= w; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i - 1].w)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i - 1].w] + v[i - 1].v);
		}
	}
	return dp[n][w];
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