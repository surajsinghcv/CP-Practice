
// https://codeforces.com/contest/1216/problem/B      

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

bool cmp(ii a, ii b)
{
    if(a.first < b.first)
    {
        return 1;
    }
    else if(a.first == b.first)
    {
        return (a.second > b.second);
    }
    return 0;
}

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, temp;
    scanf("%d", &n);

    vii v(n);
    flu(i, 0, n)
    {
        scanf("%d", &temp);
        v[i] = mk(temp, i + 1);
    }

    sort(v.rbegin(), v.rend(), cmp);

    int count = 0;

    flu(i, 0, n)
    {
        count += v[i].first*i + 1;
    }

    printf("%d\n", count);

    flu(i, 0, n)
    {
        printf("%d ", v[i].second);
    }

    return 0;
}