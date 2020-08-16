
// https://codeforces.com/contest/615/problem/A

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
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, temp, val;
    scanf("%d%d", &n, &m);

    vector<bool> v(m + 1, 0);

    while(n--)
    {
        scanf("%d", &temp);
        while(temp--)
        {
            scanf("%d", &val);
            v[val] = 1;
        }
    }

    flu(i, 1, m + 1)
    {
        if(!v[i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}