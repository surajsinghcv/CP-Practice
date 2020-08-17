
// https://www.codechef.com/AUG20B/problems/CRDGAME3       

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
        int a, b;
        scanf("%d%d", &a, &b);

        if(a % 9 == 0) a /= 9;
        else a /= 9, a++;

        if(b % 9 == 0) b /= 9;
        else b /= 9, b++;

        if(a == b)
        {
            printf("1 %d\n", b);
        }
        else if(a < b)
        {
            printf("0 %d\n", a);
        }
        else
        {
            printf("1 %d\n", b);
        }
    }

    return 0;
}