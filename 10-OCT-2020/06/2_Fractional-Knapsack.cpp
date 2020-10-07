
// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

// function to return fractionalweights
bool cmp(Item a, Item b)
{
	double r1 = (double)a.value / a.weight;
	double r2 = (double)b.value / b.weight;

	return r1 > r2;
}

double fractionalKnapsack(int w, Item a[], int n)
{
	// Your code here
	sort(a, a + n, cmp);
	double ans = 0.0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].weight <= w)
		{
			ans += a[i].value;
			w -= a[i].weight;
		}
		else
		{
			ans += w * ((double)a[i].value / a[i].weight);
			return ans;
		}
	}
	return ans;
}