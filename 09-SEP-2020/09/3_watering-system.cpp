
// https://codeforces.com/contest/967/problem/B             

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

bool cmp(int a, int b)
{
    return a > b;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);

    int sum = 0, v[n], count = 0;

    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
        sum += v[i];
    }

    int req = ((v[0] * a) / b);

    sort(v + 1, v + n, cmp);

    flu(i, 1, n)
    {
        if(sum <= req)
        {
            break;
        }
        sum -= v[i];
        count++;
    }

    printf("%d\n", count);

    return 0;
}