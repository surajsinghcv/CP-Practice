
// https://www.spoj.com/problems/STPAR/

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

    int n;
    while (scanf("%d", &n) && n != 0) {
        vi a(n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        int k = 0, i = 0;
        stack<int> st;
        while (i < n) {
            while (st.size() && st.top() == k + 1) k++, st.pop();
            if (a[i] != k + 1) st.push(a[i]);
            else k++;
            i++;
        }
        while (st.size() && st.top() == k + 1) k++, st.pop();
        k == n ? printf("yes\n") : printf("no\n");
    }

    return 0;
}