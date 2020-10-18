
// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

class Solution {
public:
	int getMinDiff(int arr[], int n, int k) {
		// code here
		if (n == 1) return 0;
		sort(arr, arr + n);
		int mi, ma;

		int a1 = arr[0] + k, a2 = arr[n - 1] - k;
		int b1 = arr[0] + k, b2 = arr[n - 1] + k;
		int c1 = arr[0] - k, c2 = arr[n - 1] - k;
		int d1 = arr[0] - k, d2 = arr[n - 1] + k;

		int a = abs(a2 - a1), b = abs(b2 - b1), c = abs(c2 - c1), d = abs(d2 - d1);
		int temp = min(a, min(b, min(c, d)));

		if (a == temp)
			mi = a1, ma = a2;
		else if (b == temp)
			mi = b1, ma = b2;
		else if (c == temp)
			mi = c1, ma = c2;
		else
			mi = d1, ma = d2;


		if (ma < mi) swap(ma, mi);

		for (int i = 1; i < n - 1; i++) {
			if (arr[i] - k < mi && arr[i] + k > ma) {
				if (ma - (arr[i] - k) <= arr[i] + k - mi)
					mi = arr[i] - k;
				else
					ma = arr[i] + k;
			}
			if (ma < mi) swap(ma, mi);
		}
		return min(ma - mi, arr[n - 1] - arr[0]);
	}
};