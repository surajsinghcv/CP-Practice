
// https://practice.geeksforgeeks.org/problems/kth-prime-factor-of-a-number/0        

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
#define max 1000001

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

int solve(int n, int k)
{
    int count = 0;

    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            count++;
            if(count == k)
            {
                return i;
            }
            n /= i;
        }
    }

    if(n > 1 && ++count == k)
    {
        return n;
    }

    return -1;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        printf("%d\n", solve(n, k));
    }

    return 0;
}