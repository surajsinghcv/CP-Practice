
// https://codeforces.com/problemset/problem/870/A

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


int32_t main()
{
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, temp, m1 = INT_MAX, m2 = INT_MAX, m3 = INT_MAX;
    scanf("%d%d", &n, &m);

    set<int> st;

    flu(i, 0, n)
    {
        scanf("%d", &temp);
        m1 = min(m1, temp);
        st.insert(temp);
    }

    bool flag = 0;

    flu(i, 0, m)
    {
        scanf("%d", &temp);
        if(st.find(temp) != st.end())
        {
            flag = 1;
            m3 = min(m3, temp);
        }
        m2 = min(m2, temp);
    }

    if(flag)
    {
        printf("%d\n", m3);
        return 0;
    }
    if(m1 == m2)
    {
        printf("%d\n", m1);
        return 0;
    }

    printf("%d%d\n", min(m1, m2), max(m1, m2));

    return 0;
}