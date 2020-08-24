
// https://www.codechef.com/problems/STACKS

#include<bits/stdc++.h>
using namespace std;

void upperbound(vector<int> &v, int val)
{
    int i = 0, j = v.size() - 1, mid;
    while(i <= j)
    {
        mid = (i + j) / 2;
        if(v[mid] > val)
        {
            if(mid == 0 || v[mid - 1] <= val)
            {
                v[mid] = val;
                return;
            }
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    v.push_back(val);

    return;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);
    
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, index;
        scanf("%d", &n);

        vector<int> v;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &m);
            upperbound(v, m);
        }

        printf("%d ", (int)v.size());

        for(auto i : v)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}