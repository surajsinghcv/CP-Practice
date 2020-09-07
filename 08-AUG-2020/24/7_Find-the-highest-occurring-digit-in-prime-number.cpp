
// https://practice.geeksforgeeks.org/problems/find-the-highest-occurring-digit-in-prime-numbers-in-a-range/0


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

int solve(int n, int m)
{
    std::vector<int> fre(10, 0);
    std::vector<int>::iterator r, l;
    l = lower_bound(v.begin(), v.end(), n);
    r = upper_bound(v.begin(), v.end(), m);

    if(*l >= *r)
    {
        return -1;
    }

    int temp;

    for(auto i = l; i != r; i++)
    {
        temp = *i;
        while(temp)
        {
            fre[temp % 10]++;
            temp /= 10;
        }
    }

    int ma = 0, ans = -1;

    for(int i = 0; i < 10; i++)
    {
        if(ma <= fre[i])
        {
            ma = fre[i];
            ans = i;
        }
    }

    return ans;
}

int main()
{
    sieve(1000001);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);

        printf("%d\n", solve(n, m));
    }
    return 0;
}