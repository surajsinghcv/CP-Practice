
// https://practice.geeksforgeeks.org/problems/prime-factorization-and-geek-number/0

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

vi v(1000001, -1);

void primefactor()
{
    for(int i = 2; i <= max; i++)
    {
        if(v[i] == -1)
        {
            v[i] = i;
            for(int j = i * 2; j <= max; j += i)
            {
                if(v[j] == -1)
                {
                    v[j] = i;
                }
            }
        }
    }
    return;
}

void solve(int n)
{
    set<int> st;

    while(n > 1)
    {
        if(st.find(v[n]) != st.end())
        {
            printf("No\n");
            return;
        }
        st.insert(v[n]);
        n /= v[n];
    }

    printf("Yes\n");
    return;
}

int main()
{
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);
    
    primefactor();

    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n;
        scanf("%d", &n);
        solve(n);
    }

    return 0;
}