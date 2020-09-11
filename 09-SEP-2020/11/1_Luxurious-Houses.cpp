
// https://codeforces.com/problemset/problem/581/B

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

    int n;
    scanf("%d", &n);

    vector<int> v(n), ans(n, 0);

    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
    }

    ans[n - 1] = v[n - 1];

    fld(i, n - 2, 0)
    {
        ans[i] = max(ans[i + 1], v[i + 1]);
    }

    flu(i, 0, n - 1)
    {
        if(v[i] <= ans[i])
        {
            printf("%d ", ans[i] - v[i] + 1);
        }
        else
        {
            printf("0 ");
        }
    }

    printf("0\n");

    return 0;
}