
// https://codeforces.com/contest/447/problem/A       

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

    int p, n, x;
    scanf("%d%d", &p, &n);

    bool flag = 1;

    vi v(p, 0);

    flu(i, 0, n)
    {
        scanf("%d", &x);
        if(flag)
        {
            if(v[x % p] == 0) v[x % p] = 1;
            else
            {
                printf("%d\n", i + 1);
                flag = 0;
            }
        }
    }

    if(flag) printf("-1\n");

    return 0;
}