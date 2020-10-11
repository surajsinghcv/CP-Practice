
// https://codeforces.com/problemset/problem/894/A

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int solve(string a, string b, int n, int m) {
	if (m == 0)
		return 1;
	if (n == 0)
		return 0;
	int temp = solve(a, b, n - 1, m);
	if (a[n - 1] == b[m - 1])
		temp += solve(a, b, n - 1, m - 1);
	return temp;
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string b = "QAQ", a;
	cin >> a;

	cout << solve(a, b, a.length(), 3);

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