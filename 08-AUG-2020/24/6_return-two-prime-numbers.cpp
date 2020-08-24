
// https://practice.geeksforgeeks.org/problems/return-two-prime-numbers/0

#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void sieve(int n)
{
    vector<bool> primes(n + 1, true);
    

    for(int i = 2; i * i <= n; i++)
    {
        if(primes[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(primes[i])
        {
            v.push_back(i);
        }
    }

    return;
}

void solve(int n)
{
    std::vector<int>::iterator it = lower_bound(v.begin(), v.end(), n);

    int i = 1, j = (it - v.begin());

    while(i < j)
    {
        if(v[i] + v[j] == n)
        {
            printf("%d %d\n", v[i], v[j]);
            return;
        }
        else if(v[i] + v[j] < n)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return;
}

int main()
{
    sieve(100001);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        solve(n);
    }
    return 0;
}