
// https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

class Solution {
public:


	int lps(string s)
	{
		// Your code goes here
		int n = s.length(), len;
		int i = 1;

		vector<int> v(n);
		v[0] = 0;

		while (i < n) {
			while (len != 0 && s[i] != s[len]) {
				len = v[len - 1];
			}
			if (s[i] == s[len]) {
				len++;
			}
			v[i++] = len;
		}


		return len;
	}
};