
// https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1

class Solution {
public:
	int LongestBitonicSequence(vector<int>a) {
		// code here
		int n = a.size();
		vector<int> lis(n, 1), lds(n, 1);

		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j])
					lis[i] = max(lis[i], lis[j] + 1);
			}
		}

		for (int i = n - 2; i >= 0; i--) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] > a[j])
					lds[i] = max(lds[i], lds[j] + 1);
			}
		}

		int ma = 0;
		for (int i = 0; i < n; i++)
			ma = max(ma, lis[i] + lds[i] - 1);

		return ma;
	}
};