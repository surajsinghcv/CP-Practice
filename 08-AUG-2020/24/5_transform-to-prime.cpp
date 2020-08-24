
// https://practice.geeksforgeeks.org/problems/transform-to-prime/0

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1) return false; 
    if (n <= 3) return true; 
    
    if (n%2 == 0 || n%3 == 0) return false; 
    
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
        return false; 
    
    return true; 
} 


int solve(int N) 
{ 

    if (N <= 1) 
        return 2; 

    int prime = N; 
    bool found = false; 

    while (!found) { 
        prime++; 

        if (isPrime(prime)) 
            found = true; 
    } 

    return prime; 
} 

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, sum = 0, p;
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &m);
            sum += m;
        }

        if(isPrime(sum))
        {
            printf("0\n");
            continue;
        }

        printf("%d\n", solve(sum) - sum);
    }
    return 0;
}