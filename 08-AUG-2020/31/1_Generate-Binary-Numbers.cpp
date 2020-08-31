
// https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1

vector<string> generate(ll n)
{
	// Your code here
	queue<string> q;
	q.push("1");
	vector<string> v(n);
	
	string a;
	
	for(int i = 0; i < n; i++)
	{
	    v[i] = q.front();
	    q.pop();
	    q.push(v[i] + "0");
	    q.push(v[i] + "1");
	}
	
	return v;
}
