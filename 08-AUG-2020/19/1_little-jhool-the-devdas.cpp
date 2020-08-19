
// https://www.hackerearth.com/problem/algorithm/little-jhool-the-devdas/

    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n, m, count = 0, sum = 0, mi = INT_MAX;
        scanf("%d", &n);
     
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &m);
            if(m & 1)
            {
                count++;
                mi = min(mi, m);
            }
            sum += m;
        }
     
        if(count == 0)
        {
            printf(":(\n");
        }
        else
        {
            if(count & 1)
            {
                printf("%d\n", sum);
            }
            else
            {
                printf("%d\n", sum - mi);
            }
        }
        return 0;
    }