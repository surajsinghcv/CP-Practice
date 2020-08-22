
// https://practice.geeksforgeeks.org/problems/product-of-prime-factors/0

#include <bits/stdc++.h>
using namespace std;

long long solve(int n)
{
    set<int> st;
    long long ans = 1;
    
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            st.insert(i);
            n /= i;
        }
    }
    
    if(n > 1) ans *= n;
    
    for(auto i : st)
    {
        ans *= i;
    }
    
    return ans;
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    printf("%lld\n", solve(n));
	}
	
	return 0;
}