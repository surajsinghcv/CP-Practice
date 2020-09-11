
// https://www.codechef.com/CSEP2020/problems/IRVS/

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

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

vector<int> v;

void sieve(int n)
{
    vector<bool> primes(n + 1, true);
    

    for(int i = 2; i * i <= n; i++)
    {
        if(primes[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(primes[i])
        {
            v.push_back(i);
        }
    }

    return;
}    

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    sieve(1000001);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        ll sum = 0;
        scanf("%d", &n);

        for(auto i : v)
        {
            if(i <= n)
            {
                sum += i;
            }
            else
            {
                break;
            }
        }

        printf("%lld\n", sum % 10);
    }

    return 0;
}