
// http://codeforces.com/problemset/problem/259/A       

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


int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    bool flag = 1;
    string s;
 
    for(int i=1;i<=8;i++)
    {
        cin >> s;
        for(int i=1;i<8;i++)
            if(s[i] == s[i-1])
                flag = 0;
    }
 
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}