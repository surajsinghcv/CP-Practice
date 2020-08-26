
// https://codeforces.com/problemset/problem/991/B
             
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

bool check(int sum, int n) {
    return sum * 10 >= n * 45;
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    int sum = 0, count = 0;
    scanf("%d", &n);

    vector<int> v(n);
    flu(i, 0, n)
    {
        scanf("%d", &v[i]);
        sum += v[i];
    }

    sort(v.begin(), v.end());
    int i = 0;

    while(!check(sum, n))
    {
        sum += (5 - v[i++]);
    }

    printf("%d\n", i);

    return 0;
}
