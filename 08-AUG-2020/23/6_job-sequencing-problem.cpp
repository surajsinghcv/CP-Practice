
// https://practice.geeksforgeeks.org/problems/job-sequencing-problem/0

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

class solve
{
public:
    int id;
    int deadline;
    int profit;
};

bool cmp(solve a, solve b)
{
    return a.profit < b.profit;
}

int main()
{
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, a, b, c;
        scanf("%d", &n);

        vector<solve> v(n);
        flu(i, 0, n)
        {
            scanf("%d%d%d", &v[i].id, &v[i].deadline, &v[i].profit);
        }

        int count = 0, profit = 0;
        vector<bool> check(n + 1, 1);

        sort(v.rbegin(), v.rend(), cmp);

        flu(i, 0, n)
        {
            fld(j, min(n, v[i].deadline), 1)
            {
                if(check[j])
                {
                    count++;
                    profit += v[i].profit;
                    check[j] = 0;
                    break;
                }
            }
        }
        printf("%d %d\n", count, profit);
    }

    return 0;
}