
// https://practice.geeksforgeeks.org/problems/max-length-chain/1


/*
The structure to use is as follows
struct val{
    int first;
    int second;
};*/

/*You are required to complete this method*/
bool cmp(struct val a, struct val b) {
	return a.first < b.first;
}
int maxChainLen(struct val p[], int n)
{
//Your code here
	sort(p, p + n, cmp);
	vector<int> dp(n, 1);

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (p[i].first > p[j].second)
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	return *max_element(dp.begin(), dp.end());
}