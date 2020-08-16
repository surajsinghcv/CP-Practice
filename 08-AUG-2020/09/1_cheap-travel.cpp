
//  https://codeforces.com/problemset/problem/466/A

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
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);

    int temp = m * a, ans = 0;

    if(temp >= b)
    {
        ans = (n / m) * b;
        temp = n % m;
        ans += min(temp * a, b);
    }
    else
    {
        ans = n * a;
    }

    printf("%d\n", ans);

    return 0;
}