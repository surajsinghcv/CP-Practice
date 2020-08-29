
// https://codeforces.com/problemset/problem/275/A

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

    int arr[5][5], temp;

    flu(i, 0, 5)
    {
        flu(j, 0, 5) arr[i][j] = 1;
    }

    flu(i, 1, 4)
    {
        flu(j, 1, 4)
        {
            scanf("%d", &temp);
            temp = temp & 1 ? 1 : 0;
            if(temp == 0)
            {
                continue;
            }
            arr[i][j] ^= temp;
            arr[i - 1][j] ^= temp;
            arr[i][j - 1] ^= temp;
            arr[i][j + 1] ^= temp;
            arr[i + 1][j] ^= temp;
        }
    }

    flu(i, 1, 4)
    {
        flu(j, 1, 4)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}