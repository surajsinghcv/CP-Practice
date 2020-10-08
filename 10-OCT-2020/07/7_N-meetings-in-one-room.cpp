
// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0

#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int id;
	int start;
	int end;
};

bool cmp(node a, node b) {
	return a.end < b.end;
}

void solve(vector<node> v, int n) {
	sort(v.begin(), v.end(), cmp);
	int prev = 0;
	cout << v[0].id << " ";

	for (int i = 1; i < n; i++) {
		if (v[i].start >= v[prev].end) {
			cout << v[i].id << " ";
			prev = i;
		}
	}
	return;
}

int32_t main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<node> v(n);
		for (int i = 0; i < n; i++) {
			v[i].id = i + 1;
			cin >> v[i].start;
		}
		for (int i = 0; i < n; i++)
			cin >> v[i].end;

		solve(v, n);
		cout << "\n";
	}

	return 0;
}