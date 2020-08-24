
// https://www.codechef.com/COOK121B/problems/CHEFNWRK

#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, k;
        scanf("%d%d",&n, &k);

        vi v(n);
        int count = 0, ans = 1;

        bool flag = 1;

        flu(i, 0, n)
        {
            scanf("%d", &v[i]);
            if(count + v[i] > k)
            {
                count = v[i];
                ans++;
            }
            else
            {
                count += v[i];
            }
            if(v[i] > k)
            {
                flag = 0;
            }
        }
        if(flag)
        {
            printf("%d\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}