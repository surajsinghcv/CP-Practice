
// http://codeforces.com/problemset/problem/459/A

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x[4] = {0};
	int y[4] = {0};

	cin >> x[0] >> y[0] >> x[1] >> y[1];

	if (x[0] == x[1]) {
		x[2] = x[0] + abs(y[0] - y[1]);
		y[2] = y[0];
		x[3] = x[1] + abs(y[0] - y[1]);
		y[3] = y[1];
	}
	else if (y[0] == y[1]) {
		x[2] = x[0];
		y[2] = y[0] + abs(x[0] - x[1]);
		x[3] = x[1];
		y[3] = y[1] + abs(x[0] - x[1]);
	}
	else if (abs(x[1] - x[0]) == abs(y[1] - y[0])) {
		x[2] = x[0];
		y[2] = y[1];
		x[3] = x[1];
		y[3] = y[0];
	}
	else {
		cout << "-1";
		return 0;
	}

	cout << x[3] << " " << y[3] << " " << x[2] << " " << y[2] << "\n";

	return 0;
}