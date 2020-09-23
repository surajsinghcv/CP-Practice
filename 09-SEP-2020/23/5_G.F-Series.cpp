
// https://practice.geeksforgeeks.org/problems/gf-series/0/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1

#include <bits/stdc++.h>
using namespace std;

vector<long long> v(35, LONG_MIN);

long long solve(int n)
{
    if(n <= 2)
    {
        v[n] = n - 1;
        return n - 1;
    }
    long long temp = solve(n - 2);
    temp *= temp;
    temp -= solve(n - 1);
    v[n] = temp;
    return temp;
}

int main() {
	//code
	int t;
	cin >> t;
	
	solve(30);
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    for(int i = 1; i <= n; i++) cout << v[i] << " ";
	    cout << "\n";
	}
	return 0;
}