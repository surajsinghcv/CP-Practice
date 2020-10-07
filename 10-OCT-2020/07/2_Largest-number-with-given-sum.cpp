
// https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1

// Function to return Largest Number
string largestNumber(int n, int sum) {
	// Your code here
	string s = "";
	for (int i = 0; i < n; i++)
	{
		if (sum >= 9)
		{
			s += '9';
			sum -= 9;
		}
		else
		{
			s += char(sum + '0');
			sum -= sum;
		}
	}
	if (sum > 0) return "-1";
	return s;
}