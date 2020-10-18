
// https://atcoder.jp/contests/dp/tasks/dp_h

#include<bits/stdc++.h>
using namespace std;

#ifdef declare
#define mod (int)1e9 + 7;

int solve(vector<string> v, int n, int m) {
	vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
	dp[1][1] = 1;

	flu(i, 1, n + 1) {
		flu(j, 1, m + 1) {
			if (i == 1 && j == 1)
				continue;
			if (v[i - 1][j - 1] == '.')
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			dp[i][j] %= mod;
		}
	}
	return dp[n][m];
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	vector<string> v(n);
	flu(i, 0, n) {
		cin >> v[i];
	}

	cout << solve(v, n, m);

	return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
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