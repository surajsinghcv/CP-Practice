
// https://codeforces.com/problemset/problem/965/A       

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
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int k, n, s, p, x, y;
    scanf("%d%d%d%d", &k, &n, &s, &p);

    y = n % s == 0 ? 0 : 1;
    x = (n / s + y) * k;

    y = x % p == 0 ? 0 : 1;

    printf("%d\n", x / p + y);

    return 0;
}