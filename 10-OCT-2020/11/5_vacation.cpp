
// https://atcoder.jp/contests/dp/tasks/dp_c

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	int n;
	cin >> n;

	vector< vector<int> > v(n, vector<int>(3));
	flu(i, 0, n) {
		flu(j, 0, 3) {
			cin >> v[i][j];
		}
	}

	vector< vector<int> > dp(n + 1, vector<int>(3));
	flu(i, 0, 3) dp[0][i] = 0;

	flu(i, 1, n + 1) {
		flu(j, 0, 3) {
			if (j == 0)
				dp[i][j] = max(dp[i - 1][1], dp[i - 1][2]);
			else if (j == 1)
				dp[i][j] = max(dp[i - 1][0], dp[i - 1][2]);
			else
				dp[i][j] = max(dp[i - 1][0], dp[i - 1][1]);
			dp[i][j] += v[i - 1][j];
		}
		cout << "\n";
	}

	cout << max(dp[n][0], max(dp[n][1], dp[n][2]));

	return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
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