
// https://www.codechef.com/COOK122B/problems/BOWLERS

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
		int n, k, l;
		cin >> n >> k >> l;

		if ((k == 1 && n > 1) || (k * l < n))
			cout << "-1\n";
		else {
			int i = 0, j = 0;
			while (j < n) {
				cout << i + 1 << " ";
				i++;
				j++;
				i %= k;
			}
			cout << "\n";
		}
	}
}