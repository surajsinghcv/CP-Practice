
// https://www.hackerrank.com/challenges/maxsubarray/problem

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

void solve(vi v, int n) {
	int ans, ma, max_val = INT_MIN, MAX_POS;
	ans = ma = MAX_POS = 0;

	bool flag = 0;

	for (auto i : v) {
		ma += i;
		ma = max(ma, 0);
		ans = max(ans, ma);

		if (i > 0) {
			flag = 1;
			MAX_POS += i;
		}
		max_val = max(max_val, i);
	}

	ans == 0 ? printf("%d ", max_val) : pi(ans);
	flag ? printf("%d\n", MAX_POS) : printf("%d\n", max_val);
	return;
}

int32_t main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	si(t);

	while (t--) {
		int n;
		si(n);

		vi v(n);
		flu(i, 0, n) si(v[i]);

		solve(v, n);
	}

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