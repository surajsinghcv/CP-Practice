#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
    int t;
    scanf("%d", &t);
    int *arr;
    stack<int> st;

    while(t--)
    {
        int n;
        scanf("%d", &n);
        arr = new int[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int ma = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] >= ma)
            {
                ma = arr[i];
                st.push(ma);
            }
        }

        while(!st.empty())
        {
            printf("%d ", st.top());
            st.pop();
        }
        printf("\n");
    }
    return 0;
}