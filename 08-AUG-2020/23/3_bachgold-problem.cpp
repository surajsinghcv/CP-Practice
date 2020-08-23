
// https://codeforces.com/problemset/problem/749/A

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
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, odd = 0, even = 0;
    scanf("%d", &n);

    if(n & 1)
    {
        odd++;
        n -= 3;
    }

    while(n > 0)n
    {
        even++;
        n -= 2;
    }

    printf("%d\n", odd + even);
    flu(i, 0, even)
    {
        printf("2 ");
    }
    flu(i, 0, odd)
    {
        printf("3 ");
    }

    return 0;
}