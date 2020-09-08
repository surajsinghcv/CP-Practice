
// https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/practice-problems/algorithm/reversed-linked-list-01b722df/

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

int a[1005];

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    flu(i, 0, n)
    {
        scanf("%d", &a[i]);
    }

    int i = 0, s, e;
    while(i < n)
    {
        if(!(a[i] & 1))
        {
            s = e = i;
            while(i < n && !(a[i++] & 1))
            {
                e = i;
            }
            reverse(a + s, a + e);
        }
        else i++;
    }

    flu(i, 0, n)
    {
        printf("%d ", a[i]);
    }

    return 0;
}