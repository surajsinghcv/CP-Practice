
// https://www.codechef.com/CSEP2020/problems/JOJOA

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

const int MAX_CHARS = 256;

string solve(string str) 
{ 
    int n = str.length(); 
 
    int dist_count = 0; 
    bool visited[MAX_CHARS] = { false }; 
    for (int i = 0; i < n; i++) { 
        if (visited[str[i]] == false) { 
            visited[str[i]] = true; 
            dist_count++; 
        } 
    } 
    int start = 0, start_index = -1, min_len = INT_MAX; 
  
    int count = 0; 
    int curr_count[MAX_CHARS] = { 0 }; 
    for (int j = 0; j < n; j++) { 
        curr_count[str[j]]++; 
  

        if (curr_count[str[j]] == 1) 
            count++; 

        if (count == dist_count) { 
 
            while (curr_count[str[start]] > 1) { 
                if (curr_count[str[start]] > 1) 
                    curr_count[str[start]]--; 
                start++; 
            } 

            int len_window = j - start + 1; 
            if (min_len > len_window) { 
                min_len = len_window; 
                start_index = start; 
            } 
        } 
    } 

    return str.substr(start_index, min_len); 
} 

int32_t main()
{
    fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;

        a = solve(a);

        flu(i, 0, a.length())
        {
            cout << a[i] - 'a' + 1;
        }
        cout << "\n";
    }

    return 0;
}