
// https://www.hackerrank.com/challenges/countingsort4

#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int n;
	string a;
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	vector<node> v(n);
	vector<int> count(101, 0);

	for (int i = 0; i < n / 2; i++) {
		cin >> v[i].n >> v[i].a;
		v[i].a = "-";
		count[v[i].n]++;
	}

	for (int i = n / 2; i < n; i++) {
		cin >> v[i].n >> v[i].a;
		count[v[i].n]++;
	}

	for (int i = 1; i < 101; i++) {
		count[i] += count[i - 1];
	}

	vector<node> temp(n);
	for (int i = n - 1; i >= 0; i--) {
		temp[count[v[i].n] - 1] = v[i];
		count[v[i].n]--;
	}

	for (int i = 0; i < n; i++) {
		cout << temp[i].a << " ";
	}

	return 0;
}