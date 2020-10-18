
// https://codeforces.com/contest/1421/problem/A

#include<bits/stdc++.h>
using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int a, b;
		cin >> a >> b;

		cout << (a ^ b) << "\n";
	}

	return 0;
}
