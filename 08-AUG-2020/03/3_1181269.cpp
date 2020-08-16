


#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int val(int k, int d, int n)
{
    k = k + d;
    if(k >= n)
    {
        return k - n;
    }
    return k;
}

void guggling(int *a, int n, int d)
{
    int g = gcd(n, d), temp, j, i, k;

    cout << d << " " << g << "\n"; 

    for(int i = 0; i < g; i++)
    {
        temp = a[i];
        j = i;
        k = val(j, d, n);
        while(k != i)
        {
            a[j] = a[k];
            j = k;
            k = j + d;
            k = val(j, d, n);
        }
        a[j] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    int d;
    cin >> d;

    guggling(a, n ,d);

    return 0;
}