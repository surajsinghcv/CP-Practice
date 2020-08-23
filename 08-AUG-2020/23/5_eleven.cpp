
// https://codeforces.com/problemset/problem/918/A

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
#define max 100001;

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

int main()
{
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    cin >> n;
    string arr;

    flu(i, 0, n)
    {
        arr.pb('o');
    }

    int f = 1, s = 1, temp;
    arr[0] = 'O';

    while(f + s <=n)
    {
        arr[f + s - 1] = 'O';
        temp = f;
        f = s;
        s += temp;
    }

    cout << arr;

    return 0;
}