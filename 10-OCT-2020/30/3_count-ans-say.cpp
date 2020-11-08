
// https://leetcode.com/problems/count-and-say/

class Solution {
public:
	string countAndSay(int n) {
		string a = "1";
		string ans = "";
		char prev;
		int count;
		for (int i = 2; i <= n; i++) {
			ans = "";
			prev = a[0];
			count = 1;
			for (int j = 1; j < a.length(); j++) {
				if (prev == a[j]) {
					count++;
				}
				else {
					ans += char(count + '0');
					ans += prev;
					prev = a[j];
					count = 1;
				}
			}
			ans += char(count + '0');
			ans += prev;
			a = ans;
		}
		return a;
	}
};