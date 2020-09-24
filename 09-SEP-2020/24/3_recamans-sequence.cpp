
// https://practice.geeksforgeeks.org/problems/recamans-sequence/0/?category[]=Recursion&difficulty[]=0&page=1&query=category[]Recursiondifficulty[]0page1

#include <bits/stdc++.h>
using namespace std;

int solve(set<int> &v, int n)
{
    if(n == 0) return 0;
    
    int curr = solve(v, n - 1) - n;

    if(curr < 0 || v.find(curr) != v.end()) curr += 2*n;

    v.insert(curr);
    cout << curr << " ";
    
    return curr;
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    set<int> v;
	    v.insert(0);
	    cout << "0 ";
	    solve(v, n - 1);
	    printf("\n");
	}
	
	return 0;
}