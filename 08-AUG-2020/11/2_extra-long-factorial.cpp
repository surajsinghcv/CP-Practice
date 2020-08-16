
// https://www.hackerrank.com/challenges/extra-long-factorials/problem

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, index = 0, temp;
    int arr[250] = {};
    arr[0] = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= index; j++)
        {
            temp = arr[j] * i + c;
            arr[j] = temp % 10;
            c = temp / 10;
        }
        while(c > 0)
        {
            arr[++index] = c % 10;
            c /= 10;
        }
    }

    for(int i = index; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    
    printf("\n");

    return 0;
}
