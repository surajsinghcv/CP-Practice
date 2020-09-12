
// https://codeforces.com/problemset/problem/813/A

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

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    si(n);

    int sum = 0, temp;
    flu(i, 0, n)
    {
        si(temp);
        sum += temp;
    }

    int m, a, b, ans = -1;
    si(m);

    flu(i, 0, m)
    {
        si(a);
        si(b);

        if(sum >= a && sum <= b)
        {
            ans = sum;
            break;
        } 
        else if(sum < a)
        {
            ans = a;
            break;
        }
    }

    pi(ans);

    return 0;
}