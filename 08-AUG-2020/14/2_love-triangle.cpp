
// https://codeforces.com/contest/939/problem/A

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

    int n;
    scanf("%d", &n);

    vi v(n + 1);

    flu(i, 1, n + 1)
    {
        scanf("%d", &v[i]);
    }

    flu(i, 1, n + 1)
    {
        if(i == v[v[v[i]]])
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}