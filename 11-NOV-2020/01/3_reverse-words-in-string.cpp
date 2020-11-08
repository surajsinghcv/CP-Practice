
// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0

class Solution {
public:
	void reverseStr(string &a, int s, int e) {
		while (s < e) {
			swap(a[s], a[e]);
			s++;
			e--;
		}
		return;
	}

	string reverseWords(string a) {
		int s = 0, e, mid;
		char temp;

		for (e = 0; e < a.length(); e++) {
			while (a[i] == ' ') {
				reverseStr(a, s, e - 1);
				s = e + 1;
			}
		}
		reverseStr(a, s, e - 1);
		reverseStr(a, 0, a.length() - 1);
		return a;
	}
};