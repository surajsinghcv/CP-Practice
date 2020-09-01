
// https://codeforces.com/problemset/problem/131/A

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

    string s;
    cin >> s;

    int count(0);
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }

    if(count == s.length() - 1)
    {
        if(s[0] >= 'a' && s[0] <= 'z') 
        {
            s[0] -= 32;
            for(int i = 1; i < s.length(); i++) s[i] += 32;
        }
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                s[i] += 32;
            }
        }
    }

   
    cout << s << "\n";

    return 0;
}