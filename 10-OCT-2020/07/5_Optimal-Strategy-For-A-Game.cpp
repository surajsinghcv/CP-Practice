
// https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game/0

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int solve(vector<int> v, int i, int j, vector<vector<int>> &dp) {
	if (i + 1 == j)
		return max(v[i], v[j]);
	if (dp[i][j] != -1)
		return dp[i][j];
	int a = min(solve(v, i + 2, j, dp), solve(v, i + 1, j - 1, dp)) + v[i];
	int b = min(solve(v, i, j - 2, dp), solve(v, i + 1, j - 1, dp)) + v[j];
	return dp[i][j] = max(a, b);
}

int32_t main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int t;
	si(t);

	while (t--) {
		int n;
		si(n);

		vector<int> v(n);
		flu(i, 0, n) si(v[i]);

		vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

		pi(solve(v, 0, n - 1, dp));
		printf("\n");
	}

	return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// typedef long long ll;
// typedef pair<int, int> ii;
// typedef vector<ii> vii;
// typedef vector<int> vi;
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