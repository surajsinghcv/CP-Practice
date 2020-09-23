
// https://practice.geeksforgeeks.org/problems/subset-sums/0/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n, vector<int> &ans, int sum)
{
    if(n == 0)
    {
        ans.push_back(sum);
        return;
    }
    solve(v, n - 1, ans, sum);
    solve(v, n - 1, ans, sum -= v[n - 1]);
    return;
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    vector<int> v(n), ans;
	    int sum = 0;
	    for(int i = 0; i < n; i++) scanf("%d", &v[i]) , sum += v[i];
	    solve(v, n, ans, sum);
	    
	    sort(ans.begin(), ans.end());
	    
	    for(auto i : ans) printf("%d ", i);
	    printf("\n");
	}
	
	return 0;
}