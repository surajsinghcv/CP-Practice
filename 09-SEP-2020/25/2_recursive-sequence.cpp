
// https://practice.geeksforgeeks.org/problems/recursive-sequence/0/?category[]=Recursion&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]0page1

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

long long solve(int n, int in, int m)
{
	if(m >= n + 1) return 0;

	long long sum = 1;
	int i;
	for(i = in; i < in + m; i++)
	{
		sum *= i;
	}

	return sum + solve(n, i, m + 1);
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
    	int n;
    	si(n);

    	cout << solve(n, 1, 1) << "\n";
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