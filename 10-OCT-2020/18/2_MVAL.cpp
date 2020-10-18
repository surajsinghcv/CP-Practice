
// https://www.codechef.com/COOK122B/problems/MVAL

#include <bits/stdc++.h>

#define int long long

using namespace std;

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

		vector<int> v(n);
		int count = 0, sum = 0;

		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] < 0)
				count++;
			else
				sum += v[i];
		}

		cout << sum << "\n";

		if (count == 0 || count == n) {
			cout << "0\n";
			continue;
		}

		vector<int> l, r;
		int l1 = 0, r1 = n - 1;

		while (l1 < r1) {
			while (l1 < n && v[l1] < 0)
				l1++;

			while (r1 >= 0 && v[r1] > 0)
				r1--;

			if (l1 < r1) {
				l.push_back(l1 + 1);
				r.push_back(r1 + 1);
				l1++;
				r1--;
			}
		}

		cout << l.size() + r.size() << " ";
		for (auto i : l)
			cout << i << " ";
		for (auto i : r)
			cout << i << " ";
		cout << "\n";
	}
}

