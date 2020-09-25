
// https://practice.geeksforgeeks.org/problems/fact-digit-sum/0/?category[]=Recursion&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]0page1

#include <bits/stdc++.h>
using namespace std;

vector<int> v(11);

int factorial(int n)
{
    if(n == 1)
    {
        v[1] = 1;
        return 1;
    }
    
    v[n] = factorial(n - 1) * n;
    return v[n];
}

void solve(int n, int i, int sum, string s)
{
    if(i == 0)
    {
        cout << -1 << "\n";
        return;
    }
    if(sum + v[i] == n)
    {
        cout << i << s << "\n";
        return;
    }
    if(sum + v[i] < n) solve(n, i, sum + v[i], char(i + '0') + s);
    else solve(n, i - 1, sum, s);
    return;
}

int main() {
	//code
	
	int t;
	cin >> t;
	
	factorial(9);
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    string a = "";
	    solve(n, 9, 0, a);
	}
	return 0;
}