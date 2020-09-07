
// https://www.codechef.com/problems/COMPILER

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

    int t; cin >> t;
    while(t--){
        stack<char> st;
            long ans=0;
            string s;
            cin>>s;
            long f=0;
        for(int i=0;i<s.length();i++)
        {
            f++;
             if(!st.empty() && st.top()=='<' && s[i]=='>')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            if(st.empty())
            {
                ans += f;
                f = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}