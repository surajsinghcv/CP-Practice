
// https://www.codechef.com/COOK123B/problems/PATHSUMS

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

void dfs(vector<int> v[], vector<int> &node, vector<int> &visited, queue<int> q, bool flag)
{
	if (q.empty())
		return;
	int n = q.size();
	while (n--) {
		int temp = q.front();
		q.pop();
		if (visited[temp] == 0)
			continue;
		else
			visited[temp] = 0;
		node[temp] = flag ? 1 : 2;

		for (auto i : v[temp]) {
			q.push(i);
		}
	}
	dfs(v, node, visited, q, !flag);
	return;
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

		vector<int> v[n + 1];
		int a, b;

		flu(i, 0, n - 1) {
			cin >> a >> b;
			v[a].pb(b);
			v[b].pb(a);
		}

		vector<int> node(n + 1), visited(n + 1, 1);

		queue<int> q;
		flu(i, 1, n + 1) {
			if (visited[i] == 1) {
				q.push(i);
				dfs(v, node, visited, q, true);
				q.pop();
			}
		}

		for (int i = 1; i <= n; i++) {
			cout << node[i] << " ";
		}
		cout << "\n";
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