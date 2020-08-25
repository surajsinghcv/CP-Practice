
// https://codeforces.com/problemset/problem/807/A

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

    int n, before, after, prev = INT_MAX;
    scanf("%d", &n);

    bool flag = 1;

    flu(i, 0, n)
    {
        scanf("%d%d", &before, &after);
        if(abs(after - before))
        {
            printf("rated\n");
            return 0;
        }
        if(prev < before)
        {
            flag = 0;
        }
        prev = before;
    }

    !flag ? printf("unrated\n") : printf("maybe\n");

    return 0;
}