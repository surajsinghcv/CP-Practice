
// https://codeforces.com/contest/1421/problem/B

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int n;
int visted[201][201];

bool dfs(vector<string> v, int x, int y, char c) {
	if (x >= n || y >= n || x < 0 || y < 0)
		return 0;
	if (x == n - 1 && y == n - 1)
		return 1;
	if (v[x][y] != c && v[x][y] != 'S') {
		return 0;
	}
	if (visted[x][y] == 1)
		return 0;
	visted[x][y] = 1;
	return (dfs(v, x + 1, y, c) || dfs(v, x, y + 1, c) || dfs(v, x - 1, y, c) || dfs(v, x, y - 1, c));
}

int32_t main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		vector<vector<char>> v(n + 1, vector<char>(n + 1));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> v[i][j];
			}
		}
		if (v[2][1] == v[1][2]) {
			if (v[n][n - 1] == v[n - 1][n])
			{
				if (v[n - 1][n] != v[1][2])
					cout << 0 << endl;
				else {
					cout << 2 << endl;
					cout << "1 2" << endl;
					cout << "2 1" << endl;
				}
			}
			else
			{
				cout << 1 << endl;
				if (v[n - 1][n] == v[1][2])
					cout << n - 1 << " " << n << endl;
				else
				{
					cout << n << " " << n - 1 << endl;
				}
			}
		}
		else
		{
			if (v[n - 1][n] != v[n][n - 1])
			{
				cout << 2 << endl;
				cout << 1 << " " << 2 << endl;
				if (v[n - 1][n] == v[2][1])
					cout << n - 1 << " " << n << endl;
				else
				{
					cout << n << " " << n - 1 << endl;
				}

			}
			else
			{
				cout << 1 << endl;
				if (v[1][2] == v[n][n - 1])
					cout << 1 << " " << 2 << endl;
				else
				{
					cout << 2 << " " << 1 << endl;
				}

			}
		}

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