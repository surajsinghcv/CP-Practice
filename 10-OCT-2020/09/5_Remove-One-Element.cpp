
// https://codeforces.com/problemset/problem/1272/D

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	si(n);

	vi v(n), lis(n, 1), lds(n, 1);

	flu(i, 0, n) si(v[i]);

	int ans = 1;

	for (int i = 1; i < n; i++) {
		if (v[i - 1] < v[i]) {
			lis[i] = lis[i - 1] + 1;
			ans = max(ans, lis[i]);
		}
	}

	for (int i = n - 2; i >= 0; i--) {
		if (v[i] < v[i + 1]) {
			lds[i] = lds[i + 1] + 1;
			ans = max(ans, lds[i]);
		}
	}



	for (int i = 0; i < n - 2; i++) {
		if (v[i] < v[i + 2]) {
			ans = max(ans, lis[i] + lds[i + 2]);
		}
	}

	pi(ans);

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