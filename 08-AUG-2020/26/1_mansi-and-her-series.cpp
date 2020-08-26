
// https://practice.geeksforgeeks.org/problems/mansi-and-her-series/0

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

        printf("%lld\n", (ll)(n * (v[n - 1] + 1)));
    }

    return 0;
}