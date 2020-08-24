
// https://codeforces.com/problemset/problem/672/A     

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
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    int curr = 1, count = 0, temp;
    vi v;

    while(count + v.size() < n)
    {
        count += v.size();
        v.clear();
        temp = curr;

        while(temp)
        {
            v.pb(temp % 10);
            temp /= 10;
        }

        reverse(v.begin(), v.end());
        curr++;
        
    }

    printf("%d\n", v[n - count - 1]);


    return 0;
}