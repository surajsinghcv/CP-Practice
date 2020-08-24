
// https://practice.geeksforgeeks.org/problems/twisted-prime-number/0

#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
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

    for(int i = 5; i * i < n; i += 6)
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
        int n, m = 0;
        scanf("%d", &n);

        bool flag1, flag2;

        flag1 = isprime(n);
        if(flag1)
        {
            while(n)
            {
                m = m * 10 + n % 10;
                n /= 10;
            }
            flag2 = isprime(m);
            flag1 && flag2 ? printf("Yes\n") : printf("No\n");
            continue;
        }
        printf("No\n");
    }
    return 0;
}