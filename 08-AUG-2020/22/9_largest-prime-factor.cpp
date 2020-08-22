
// https://practice.geeksforgeeks.org/problems/largest-prime-factor/0

#include <bits/stdc++.h>
using namespace std;

void primefactor(long long n)
{
    int last;
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            last = i;
            n /= i;
        }
    }
    
    if(n > 1) last = n;
    
    printf("%d\n", last);
    
    return;
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    long long n;
	    scanf("%lld", &n);
	    
	    primefactor(n);
	}
	
	return 0;
}