
// https://codeforces.com/problemset/problem/1295/A

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


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        if(n & 1)
        {
            printf("7");
            n -= 3;
            flu(i, 0, n / 2)
            {
                printf("1");
            }
        }
        else
        {
            flu(i, 0, n / 2)
            {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}