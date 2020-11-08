
// https://www.codechef.com/LTIME89B/problems/GSUB

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

ll solve(vi v, int n) {
	ll temp = 1;
	loop(i, 2, n) {
		if (v[i] != v[i - 1])
			temp++;
	}
	return temp;
}

int32_t main() {
	file_i_o();

	int t;
	scanf("%d", &t);

	while (t--) {
		int n, q, a, b, temp;
		scanf("%d%d", &n, &q);

		vi v(n + 1);
		loop(i, 1, n) {
			scanf("%d", &v[i]);
		}

		ll count = solve(v, n);

		while (q--) {
			scanf("%d%d", &a, &b);
			if (a == 1) {
				if (v[a] == v[a + 1]) {
					if (v[a] != b) {
						count++;
					}
				}
				else {
					if (v[a + 1] == b) {
						count--;
					}
				}
			}
			else if (a == n) {
				if (v[a] == v[a - 1]) {
					if (v[a] != b) {
						count++;
					}
				}
				else {
					if (v[a - 1] == b) {
						count--;
					}
				}
			}
			else {
				if (v[a - 1] == v[a + 1]) {
					if (v[a - 1] == b && v[a] != b) {
						count -= 2;
					}
					else if (v[a - 1] != b && v[a] == v[a - 1]) {
						count += 2;
					}
				}
				else {
					if (v[a - 1] != b && v[a + 1] != b ) {
						if (v[a] == v[a - 1] || v[a] == v[a + 1]) {
							count++;
						}
					}
					else if (v[a - 1] != b && v[a + 1] == b) {
						if (v[a - 1] != v[a] && v[a + 1] != v[a]) {
							count--;
						}
					}
					else if (v[a - 1] == b && v[a + 1] != b) {
						if (v[a - 1] != v[a] && v[a + 1] != v[a]) {
							count--;
						}
					}
				}
			}
			v[a] = b;
			count = max(count, 1ll);
			printf("%lld\n", count);
		}
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