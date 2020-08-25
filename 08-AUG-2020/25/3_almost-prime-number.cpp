
// https://practice.geeksforgeeks.org/problems/almost-prime-numbers/1

bool primefactorization(int n, int k)
{
    int count = 0;

    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0) n /= i, count++;
    }

    if(n > 1) count++;
    
    if(count == k)
    {
        return 1;
    }
    
    return 0;
}
/*You are required to complete this function*/
void printKAlmostPrimes(int k, int n)
{
    int count = 0, i = 1;
    while(count < n)
    {
        i++;
        if(primefactorization(i, k))
        {
            count++;
            cout << i << " ";
        }
    }
}