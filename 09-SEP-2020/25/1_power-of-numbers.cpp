
// https://practice.geeksforgeeks.org/problems/power-of-numbers/0/?category[]=Recursion&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]0page1

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long exp(long long base, long long power)
{
    if(power == 0)
    {
    	return 1;
    }

    long long ans = exp(base, power / 2) % mod;

    if(power & 1)
    {
    	ans *= ans;
    	ans %= mod;
    	ans *= base;
    	ans %= mod;
    }
    else
    {
    	ans *= ans;
    	ans %= mod;
    }
    
    return ans % mod;
}

long long reverse(long long n)
{
	long long temp = 0;
	while(n)
	{
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	return temp;
}

int main() {
	//code
	// freopen("input.txt", "r", stdin);
 //    freopen("myoutput.txt", "w", stdout);

	int t;
	cin >> t;
	
	while(t--)
	{
	    long long n, p;
	    cin >> n;
	    p = reverse(n);

	    cout << exp(n, p) << "\n";
	}
	return 0;
}