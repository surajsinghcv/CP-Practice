
//  https://codeforces.com/problemset/problem/268/A        

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

    int **arr = new int*[n];

    flu(i, 0, n)
    {
        arr[i] = new int[2];
        scanf("%d%d", &arr[i][0], &arr[i][1]);
    }

    int count = 0;

    flu(i, 0, n)
    {
        flu(j, 0, n)
        {
            if(i == j)
            {
                continue;
            }
            if(arr[i][0] == arr[j][1]) count++;
        }
    }

    printf("%d\n", count);

    return 0;
}