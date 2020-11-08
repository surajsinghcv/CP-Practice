
// https://codeforces.com/problemset/problem/271/D

#include<bits/stdc++.h>
using namespace std;

typedef long long int     ll;
typedef long double       ld;
typedef pair<int, int>    pii;
typedef vector<pii>       vpii;
typedef vector<int>       vi;

typedef pair<ll, ll>      pll;
typedef vector<pll>       vpll;
typedef vector<ll>        vl;

#define pb                push_back
#define mk                make_pair
#define mod               (int)1e9+7
#define inf               (ll)1e18
#define endl              "\n"
#define vs                vector<string>
#define ump               unordered_map
#define mp                map
#define pq_max            priority_queue<ll>
#define pq_min            priority_queue<ll,vi,greater<ll> >
#define ff                first
#define ss                second
#define mid(l, r)         (l+(r-l)/2)
#define loop(i, a, b)     for(int i = (a); i <= (b); i++)
#define looprev(i, a, b)  for(int i = (a); i >= (b); i--)
#define print(arr, a, b)  for(int i = (a); i <= (b); i++) cout << arr[i] << " ";
#define scan(arr, a, b)   for(int i = (a); i <= (b); i++) cin >> arr[i];


void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	file_i_o();

	string s, v;
	cin >> s >> v;

	int k;
	cin >> k;

	int d = 31;
	int m = 1e9 + 9;
	int n = s.length();

	vector<long long> p_pow(n), h(n + 1);
	p_pow[0] = 1; h[0] = 0;

	for (int i = 1; i < n; i++) {
		p_pow[i] = (p_pow[i - 1] * d) % m;
	}

	for (int i = 1; i <= n; i++) {
		h[i] = (h[i - 1] + s[i - 1] * p_pow[i - 1]) % m;
	}

	vector<int> temp(n + 1);
	temp[0] = 0;

	for (int i = 1; i <= n; i++) {
		temp[i] = (v[s[i - 1] - 'a'] == '1') ? temp[i - 1] : temp[i - 1] + 1;
	}
	cout << "\n";

	int count = 0, count_k = 0;
	long long cur_h;

	for (int j = 1; j <= n; j++) {
		set<long long> st;
		for (int i = 0; i <= n - j; i++) {
			cur_h = (h[i + j] + m - h[i]) % m;
			cur_h = (cur_h * p_pow[n - i - 1]) % m;
			if (temp[i + j] - temp[i] <= k) {
				st.insert(cur_h);
			}
		}
		count += st.size();
	}

	cout << count << "\n";

	return 0;
}