
// https://practice.geeksforgeeks.org/problems/permutation-with-spaces/0/?category[]=Recursion&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]0page1

#include <bits/stdc++.h>
using namespace std;

void solve(string str, int i, int n, set<string> &v, string a)
{
    if(i == n)
    {
        v.insert(a);
        return;
    }
    solve(str, i + 1, n, v, a + str[i]);
    solve(str, i + 1, n, v, a + ' ' + str[i]);
}

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    set<string> v;
	    int n = s.length();
	    string a = "";
	    a.push_back(s[0]);
	    
	    solve(s, 1, n, v, a);
	    for(auto i : v)
	    {
	        cout << '(' << i << ')';
	    }
	    cout << "\n";
	}
	return 0;
}