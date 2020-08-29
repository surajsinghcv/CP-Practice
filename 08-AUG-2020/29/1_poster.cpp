
// https://codeforces.com/problemset/problem/412/A

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

    int n, p;
    scanf("%d %d", &n, &p);

    vector<char> v(n);
    scanf("%c", &v[0]);
    flu(i, 0, n)
    {
        scanf("%c", &v[i]);
    }
    p--;

    if(n - p <= p)
    {
        flu(i, p, n - 1)
        {
            printf("RIGHT\n");
        }

        fld(i, n - 1, 0)
        {
            if(i == 0)
            {
                printf("PRINT %c\n", v[i]);
                break;
            }
            printf("PRINT %c\nLEFT\n", v[i]);
        }
    }
    else
    {
        fld(i, p - 1, 0)
        {
            printf("LEFT\n");
        }

        flu(i, 0, n)
        {
            if(i == n - 1)
            {
                printf("PRINT %c\n", v[i]);
                break;
            }
            printf("PRINT %c\nRIGHT\n", v[i]);
        }
    }

    return 0;
}