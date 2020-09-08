
// http://codeforces.com/problemset/problem/277/A


/*
How strange it is : 
    We wish to wear high brands,
    but we feel most comfortable in pajaymas.

    We wish to sit in Taj & Marriot with elight people,
    but we enjoy roadside tea with friends and with people we love.

    We wish to own big cars and go on long drives,
    yet we talk our heart out only while walking down a long road.

" Don't be serious, Enjoy Life as it Comes ".  

   WORDS OF RATAN TATA  
*/             

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

int p[105], l[105];

int find(int x)
{
    if(x == p[x])
    {
        return x;
    }
    return p[x] = find(p[x]);;
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    p[b] = a;
    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, q, curr, prev, count = 0;
    scanf("%d%d", &n, &m);

    
    flu(i, 0, 102)
    {
        p[i] = i;
        l[i] = 0;
    }

    flu(i, 1, n + 1)
    {
        scanf("%d", &q);

        if(q == 0)
        {
            count++;
            continue;
        }
        scanf("%d", &prev);
        l[prev] = 1;
        flu(j, 1, q)
        {
            scanf("%d", &curr);
            Union(prev, curr);
            l[curr] = 1;
        }
    }

    bool flag = 0;

    flu(i, 1, n + 1)
    {
        if(l[i] == 1)
        {
            flag = 1;
            if(p[i] == i) count++;
        }
    }

    if(count - flag < 0) count++; 

   printf("%d\n", count - flag);

    return 0;
}