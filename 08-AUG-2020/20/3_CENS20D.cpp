
// https://www.codechef.com/PRACTICE/problems/CENS20D

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
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        scanf("%d",&n);
        vi v(n);
        flu(i, 0, n)
        {
            scanf("%d", &v[i]);
        }
        int count = 0;
        flu(i, 0, n - 1)
        {
            flu(j, i + 1, n)
            {
                if((v[i] & v[j]) == v[i])
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}