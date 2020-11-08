
// https://www.hackerrank.com/challenges/countingsort1/problem

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> count(100, 0);

	for (int i = 0; i < n; i++) {
		count[v[i]]++;
	}

	for (int i = 0; i < 100; i++) {
		cout << count[i] << " ";
	}

	return 0;
}