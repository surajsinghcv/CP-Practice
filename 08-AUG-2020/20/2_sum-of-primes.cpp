
// https://practice.geeksforgeeks.org/problems/sum-of-primes/0

#include <bits/stdc++.h>

using namespace std;

#define range 50001

vector<int> v(range , 1);

void seive(){
    v[0] = v[1] = 0;
    
    for(int i = 2; i*i <= range; i++)
    {
        if(v[i])
        {
            for(int j = 2*i; j <= range; j += i)
            {
                v[j] = false;
            }
        }
    }
    return;
}

int main() {
	//code
	
	seive();
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n, sum = 0;
	    scanf("%d", &n);
	    
	    while(n > 0)
	    {
	        if(v[n % 10])
	        {
	            sum += n % 10;
	        }
	        n /= 10;
	    }
	    printf("%d\n", sum);
	}
	
	return 0;
}