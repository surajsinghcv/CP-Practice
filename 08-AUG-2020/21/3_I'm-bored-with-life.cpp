
// https://codeforces.com/problemset/problem/822/A        

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

    int a, b;
    scanf("%d%d", &a, &b);

    int n = min(a, b), ans = 1;
    flu(i, 2, n + 1)
    {
        ans *= i;
    }

    printf("%d\n", ans);

    return 0;
}