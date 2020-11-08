
// https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/problem-to-be-linked-with-kmp-tutorial-1/description/

#include<bits/stdc++.h>
using namespace std;

int solve(string txt, string pat) {
	int n = txt.length();
	int m = pat.length();

	int d = 256, q = 11;

	unsigned long int h = 0, temp = 0, mul = 1, count = 0;
	bool flag;

	for (int i = 1; i < m; i++) {
		mul = (mul * d);
	}

	for (int i = 0; i < m; i++) {
		h = (d * h + pat[i]);
		temp = (temp * d + txt[i]);
	}

	for (int i = 0; i < n - m + 1; i++) {
		if (h == temp) {
			flag = 1;
			for (int j = 0; j < m; j++) {
				if (txt[i + j] != pat[j]) {
					flag = 0;
					break;
				}
			}
			if (flag)
				count++;
		}
		if (i < n - m) {
			temp = ((d * (temp - txt[i] * mul)) + txt[i + m]);
			if (temp < q)
				temp += q;
		}
	}

	return count;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	string pat, txt;
	cin >> pat >> txt;

	cout << solve(txt, pat);

	return 0;
}