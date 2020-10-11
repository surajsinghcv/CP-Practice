
// https://www.codechef.com/problems/ALTARAY

#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {


		int n;
		cin >> n;

		vector<int> v(n), ans(n, 1);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		for (int i = n - 2; i >= 0; i--) {
			if ((v[i] >= 0 && v[i + 1] < 0) || (v[i] < 0 && v[i + 1] >= 0))
				ans[i] = ans[i + 1] + 1;
		}
		for (auto i : ans)
			cout << i << " ";
		cout << "\n";
	}


	return 0;
}