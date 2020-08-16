
// https://codeforces.com/problemset/problem/1374/B

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

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, count(0);
        scanf("%d", &n);
        while(1)
        {
            if(n == 1)
            {
                printf("%d\n", count);
                break;
            }
            else if(n % 6 == 0) n /= 6;
            else if(n % 3 != 0)
            {
                printf("-1\n");
                break;
            }
            else n *= 2;

            count++;
        }
    }

    return 0;
}