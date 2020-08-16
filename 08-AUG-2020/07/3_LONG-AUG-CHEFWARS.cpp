
// https://www.codechef.com/AUG20B/problems/CHEFWARS        

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
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int h, p;
        scanf("%d%d", &h, &p);

        while(h > 0 && p > 0)
        {
            h -= p;
            if(h <= 0)
            {
                printf("1\n");
                break;
            }
            p >>= 1;
            if(p == 0)
            {
                printf("0\n");
                break;
            }
        }
    }

    return 0;
}