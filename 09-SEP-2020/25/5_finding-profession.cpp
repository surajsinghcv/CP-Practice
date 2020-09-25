
// https://practice.geeksforgeeks.org/problems/finding-profession/0/?category[]=Recursion&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]0page1

#include <bits/stdc++.h>
using namespace std;

bool solve(long long n, long long m)
{
    if(n == 1) return 1;
    if(m & 1) return !solve(n - 1, m / 2);
    return solve(n - 1, m / 2);
}

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--)
	{
	    long long n, m;
	    cin >> n >> m;
	    
	    solve(n, m - 1) ? cout << "Engineer\n" : cout << "Doctor\n";
	}
	return 0;
}