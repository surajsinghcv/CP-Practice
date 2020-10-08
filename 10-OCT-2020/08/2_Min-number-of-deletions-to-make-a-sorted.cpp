
// https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-to-make-a-sorted-sequence3248/1

class Solution {


public:
	int BS(std::vector<int> v, int val)
	{
		int l = 0, r = v.size() - 1, mid;
		while (r > l)
		{
			mid = (r + l) / 2;
			if (v[mid] >= val && (mid - 1 < 0 || v[mid - 1] < val))
				return mid;
			else if (v[mid] < val)
				l = mid + 1;
			else
				r = mid - 1;
		}
		return r;
	}
	int minDeletions(int arr[], int n)
	{
		// Your code goes here
		vector<int> dp(n + 1, 1), v;
		v.push_back(arr[0]);

		for (int i = 1; i < n; i++) {
			if (*v.rbegin() < arr[i]) {
				v.push_back(arr[i]);
			}
			else {
				v[BS(v, arr[i])] = arr[i];
			}
		}
		return n - (int)v.size();
	}
};