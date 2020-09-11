
// https://www.codechef.com/CSEP2020/problems/GORIV            

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
    fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        string a, s, b;
        map<string, bool> mp;
        map<string, queue<string>> v;
        map<string, int> ans;
        ll count = 0;
        queue<string> q;

        int n;
        cin >> n >> s;

        while(n--)
        {
            cin >> a >> b;
            v[a].push(b);
            mp[a] = 0;
            mp[b] = 0;
            ans[a] += 1;
        }

        q.push(s);

        while(!q.empty())
        {
            mp[q.front()] = 1;
            if(!v[q.front()].empty())
            {
                q.push(v[q.front()].front());
                v[q.front()].pop();
            }
            q.pop();
        }

        for(auto i : mp)
        {
            if(i.second)
            {
                count += ans[i.first];
            }
        }

        cout << count << "\n";
    }

    return 0;
}