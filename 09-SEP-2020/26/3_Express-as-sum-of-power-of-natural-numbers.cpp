
// https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers/0/?category[]=Recursion&problemStatus=unsolved&difficulty[]=1&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]1page1#submission

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int solve(int x, int n, int curr, int sum)
{
    int temp = round(pow(curr, n));
    if(sum + temp == x) return 1;
    if(sum + temp > x) return 0;
    
    return solve(x, n, curr + 1, sum) + solve(x, n, curr + 1, sum + temp);
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    si(t);

    while(t--)
    {
        int n, x;
        scanf("%d%d", &x, &n);

        printf("%d\n",solve(x, n, 1, 0));
    }

    return 0;
}





#else


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

#define declare
#include __FILE__
#endif