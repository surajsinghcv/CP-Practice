
// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/not-in-range-44d19403/description/

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

    vi v(1000001, 0);

    int t, a, b;
    ll sum(0);
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &a, &b);
        v[a]++;
        v[b + 1]--;
    }

    flu(i, 2, 1000001)
    {
        v[i] += v[i - 1];
    }

    flu(i, 1, 1000001)
    {
        if(v[i] == 0) sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}