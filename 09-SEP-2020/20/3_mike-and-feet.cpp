
// https://codeforces.com/problemset/problem/547/B 

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

void solve(vi v, int n)
{
    vi ans(n + 1, 0);
    stack<int> st;

    int index, temp;

    flu(i, 0, n)
    {
        while(!st.empty() && v[st.top()] >= v[i])
        {
            index = st.top();
            st.pop();
            temp = (st.empty() ? i : i - st.top() - 1);
            ans[temp] = max(ans[temp], v[index]);
        }
        st.push(i);
    }

    while(!st.empty())
    {
        index = st.top();
        st.pop();
        temp = st.empty() ? n : n - st.top() - 1;
        ans[temp] = max(ans[temp], v[index]);
    }

    flu(i, 1, n + 1)
    {
        if(v[i] != 0)
        {
            fld(j, i, 1)
            {
                ans[j] = ans[i];
            }
            break;
        }
    }

    fld(i, n, 1)
    {
        if(ans[i] != 0)
        {
            flu(j, i, n + 1)
            {
                ans[j] = ans[i];
            }
            break;
        }
    }

    fld(i, n - 1, 1)
    {
        ans[i] = max(ans[i], ans[i + 1]);
    }

    flu(i, 1, n + 1)
    {
        pi(ans[i]);
    }

    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    si(n);

    vi v(n);
    flu(i, 0, n) si(v[i]);

    solve(v, n);

    return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)



class UnionFind
{
public:
    vi p, r;

    void init(int n)
    { 
        r.reserve(n + 1);
        p.reserve(n + 1);
        for(int i = 0; i <= n; i++) p[i] = i , r[i] = 1;
            return;
    }

    int findSet(int x)
    { 
        if(p[x] == x) return x; 
        return p[x] = findSet(p[x]);
    }

    bool isSameSet(int a, int b)
    {
        return (findSet(a) == findSet(b));
    }

    void unionSet(int x, int y)
    {
        if(!isSameSet(x, y))
        {
            x = findSet(x); y = findSet(y);
            if(r[x] >= r[y]) p[y] = x , r[x] += r[y];
            else p[x] = y , r[y] += r[x];
        }
        return;
    }

    int numDisjointSets(int n)
    {
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            p[i] = findSet(i);
            if(p[i] == i) count++;
        }
        return count;
    }

    int sizeOfSet(int x)
    {
        return r[findSet(p[x])];
    }
};

#define declare
#include __FILE__
#endif