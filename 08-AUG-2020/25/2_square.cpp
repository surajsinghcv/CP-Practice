
// https://codeforces.com/problemset/problem/1351/B   

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
        int a1, b1, a2, b2;
        scanf("%d%d%d%d", &a1, &b1, &a2, &b2);

        if(max(a1, b1) == max(a2, b2) && min(a1, b1) + min(a2, b2) == max(a1, b1))
        {
            printf("Yes\n");
        } 
        else
        {
            printf("No\n");
        }
    }

    return 0;
}