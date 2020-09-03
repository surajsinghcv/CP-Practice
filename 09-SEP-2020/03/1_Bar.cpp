
// https://codeforces.com/problemset/problem/56/A

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

    int t;
    cin >> t;

    set<string> st;
    st.insert("ABSINTH");
    st.insert("BEER");
    st.insert("BRANDY");
    st.insert("CHAMPAGNE");
    st.insert("GIN");
    st.insert("RUM");
    st.insert("SAKE");
    st.insert("TEQUILA");
    st.insert("VODKA");
    st.insert("WHISKEY");
    st.insert("WINE");

    string a;
    int n, count = 0;

    while(t--)
    {
        cin >> a;
        if(a[0] >= '0' && a[0] <= '9')
        {
            n = stoi(a);
            if(n <= 17) count++;
        }
        else
        {
            if(st.find(a) != st.end())
            {
                count++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}