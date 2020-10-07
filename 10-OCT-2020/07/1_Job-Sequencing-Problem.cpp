
// https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1


bool cmp(Job a, Job b)
{
	return a.profit > b.profit;
}

pair<int, int> JobScheduling(Job arr[], int n)
{
	// your code here
	sort(arr, arr + n, cmp);
	int job = 0, pro = 0, ma = 0;

	for (int i = 0; i < n; i++)
		ma = max(ma, arr[i].dead);

	vector<bool> v(ma + 1, 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = arr[i].dead; j >= 1; j--)
		{
			if (v[j])
			{
				v[j] = 0;
				pro += arr[i].profit;
				job++;
				break;
			}
		}
	}
	return make_pair(job, pro);
}