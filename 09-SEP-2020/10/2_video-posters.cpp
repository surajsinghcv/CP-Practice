
// https://codeforces.com/problemset/problem/1070/K

#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, k, sum = 0, temp, count;
    scanf("%d%d", &n, &k);

    vi v(n + 1), ans;
    v[0] = 0;
    flu(i, 1, n + 1)
    {
        scanf("%d", &v[i]);
        sum += v[i];
    }

    bool flag = 1;

    if(sum % k == 0)
    {
        sum /= k;
        temp = count = 0;

        flu(i, 1, n + 1)
        {
            if(count < sum)
            {
                count += v[i];
                temp++;
            }
            else if(count == sum)
            {
                count = v[i];
                ans.pb(temp);
                temp = 1;
            }
            else if(count > sum)
            {
                flag = 0;
                break;
            }
        }

        if(count == sum) ans.pb(temp);
        else flag = 0;

        if(flag)
        {
            printf("Yes\n");
            flu(i, 0, k)
            {
                printf("%d ", ans[i]);
            }
            return 0;
        }
    }

    printf("No\n");

    return 0;
}