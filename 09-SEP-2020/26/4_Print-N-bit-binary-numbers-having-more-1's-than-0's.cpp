
// https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1/?category[]=Recursion&problemStatus=unsolved&difficulty[]=1&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]1page1

//User function template for C++
class Solution{
public:	

    void solve(string s, int one, int zero, int n, vector<string> &v)
    {
        if(s.length() == n)
        {
            v.push_back(s);
            return;
        }
        solve(s + '1', one + 1, zero, n, v);
        if(one > zero) solve(s + '0', one, zero + 1, n, v);
        return;
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> v;
	    string s = "";
	    solve(s, 0, 0, n, v);
	    sort(v.rbegin(), v.rend());
	    return v;
	}
};