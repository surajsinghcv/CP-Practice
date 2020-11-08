
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/arithmetic-progression-1-81131fa7/description/

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int a, b, c, temp;
		cin >> a >> b >> c;
		int ans = abs((b - a) - (c - b));
		temp = ans /  2;
		if (ans & 1) temp++;
		cout << temp << "\n";
	}

	return 0;
}