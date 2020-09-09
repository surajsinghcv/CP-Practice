
// https://www.spoj.com/problems/HISTOGRA/

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

int v[100005];
stack<int> st;

void solve(int n)
{
    ll ma = 0, temp;
    int index = 0;
    flu(i, 0, n)
    {
        while(!st.empty() && v[st.top()] >= v[i])
        {
            index = st.top();
            st.pop();
            temp = v[index] * (st.empty() ? i : i - st.top() - 1);
            ma = max(ma, temp);
        }
        st.push(i);
    }
    while(!st.empty())
    {
        index = st.top();
        st.pop();
        temp = v[index] * (st.empty() ? n : n - st.top() - 1);
        ma = max(ma, temp);
    }

    printf("%lld\n", ma);
    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;

    while(scanf("%d", &n), n)
    {
        flu(i, 0, n)
        {
            scanf("%d", &v[i]);
        }
        solve(n);
    }

    return 0;
}