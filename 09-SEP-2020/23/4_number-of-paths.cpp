
// https://practice.geeksforgeeks.org/problems/number-of-paths/0/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1

#include <bits/stdc++.h>
using namespace std;

int solve(int m, int n)
{
    if(m == 1 || n == 1) return 1;
    return solve(m - 1, n) + solve(m, n - 1);
}

int main() {
	//code
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int m, n;
	    scanf("%d%d", &m, &n);
	    printf("%d\n", solve(m, n));
	}
	
	return 0;
}