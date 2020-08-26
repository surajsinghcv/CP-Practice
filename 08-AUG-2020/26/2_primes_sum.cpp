
// https://practice.geeksforgeeks.org/problems/primes-sum/0

#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n <= 3)
    {
        return true;
    }

    if(n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);
        
        if((!(n & 1) && n > 2) || isprime(n - 2))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}