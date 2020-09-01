
// https://codeforces.com/problemset/problem/507/A

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

class node
{
public:
    int data;
    int index;
};

bool cmp(node a, node b)
{
    return a.data < b.data;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, k, m;
    scanf("%d%d", &n, &k);

    vector<node> v(n);
    flu(i, 0, n)
    {
        scanf("%d", &m);
        v[i].data = m;
        v[i].index = i;
    }

    sort(v.begin(), v.end(), cmp);
    int count = 0;
    m = 0;

    flu(i, 0, n)
    {
        if(count + v[i].data <= k)
        {
            m++;
            count += v[i].data;
        }
    }

    printf("%d\n", m);

    flu(i, 0, m)
    {
        printf("%d ", v[i].index + 1);
    }

    return 0;
}