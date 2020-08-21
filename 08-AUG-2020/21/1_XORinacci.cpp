
// https://codeforces.com/problemset/problem/1208/A      

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

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        c %= 3;
        if(c == 0)
        {
            printf("%d\n", a);
        }
        else if(c == 1)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", (a ^ b));
        }
    }

    return 0;
}