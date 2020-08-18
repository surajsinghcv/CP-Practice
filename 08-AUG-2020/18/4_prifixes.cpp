
// https://codeforces.com/contest/1216/problem/A
       

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
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, count = 0;
    cin >> n;

    string arr;
    cin >> arr;

    for(int i = 1; i < n; i += 2)
    {
        if(arr[i] == arr[i - 1])
        {
            if(arr[i] == 'a')
            {
                arr[i] = 'b';
            }
            else
            {
                arr[i] = 'a';
            }
            count++;
        }
    }

    cout << count << "\n" << arr << "\n";

    return 0;
}