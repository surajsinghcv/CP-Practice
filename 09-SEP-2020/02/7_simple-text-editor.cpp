
// https://www.hackerrank.com/challenges/simple-text-editor/problem

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

    int q, m;
    cin >> q;

    stack<string> st;
    string a, b;

    while(q--)
    {
        cin >> m;
        switch(m)
        {
            case 1:
                cin >> b;
                st.push(a);
                a.append(b);
                break;
            case 2:
                cin >> m;
                st.push(a);
                a.erase(a.length() - m);
                break;
            case 3:
                cin >> m;
                cout << a[m - 1] << "\n";
                break;
            case 4:
                a = st.top();
                st.pop();
                break;
        }
    }

    return 0;
}