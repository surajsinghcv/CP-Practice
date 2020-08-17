
// https://www.codechef.com/AUG20B/problems/CHEFWED        

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

int k;


int solve(vi v, int l, int r)
{
    if(l == r)
    {
        return k;
    }
    map<int, int> st;
    vi cal(r - l + 1);
    int temp = 0, cost = 0;
    flu(i, l, r + 1)
    {
        if(st.find(v[i]) != st.end())
        {
            if(st[v[i]] == 1) temp += 2;
            else temp++;
        }
        st[v[i]]++;
        cal[i - l] = temp;
    }

    // if(temp <= k)
    // {
    //     return k + temp;
    // }
    int ma = k + temp;
    int ind = l;

    flu(i, 0, r - l)
    {
        cost = 2 * k + cal[i];
        if(st[v[i + l]] == 2) temp -= 2;
        else if(st[v[i + l]] > 1) temp--;
        st[v[i + l]]--;
        cost += temp;
        // printf("%d\n", cost);
        if(ma >= cost)
        {
            ma = cost;
            ind = i;
        }
    }
    if(ind == l)
    {
        return ma;
    }
    return min(ma, solve(v, l, l + ind) + solve(v, l + ind + 1, r));
}

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d%d", &n, &k);

        

        if(k == 1)
        {
            vi v(n), count(101, 0);
        int ma = 0;
        map<int, int> mp;
        flu(i, 0, n)
        {
            scanf("%d", &v[i]);
            count[v[i]]++;
        }

        if(k >= n)
        {
            int a = 0;
            flu(i, 0, 101)
            {
                if(count[i] > 1) a+= count[i];
            }
            printf("%d\n", k + a);
            continue;
        }

        flu(i, 0, 101)
        {
            ma = max(ma, count[i]);
        }

        ll cost = 0, temp = 0, final = 1000000000000000001;

        flu(i, 1, ma + 2)
        {
            mp.clear();
            cost = 0;
            temp = 0;
            flu(j, 0, n)
            {
                if(mp.find(v[j]) == mp.end())
                {
                    mp[v[j]]++;
                }
                else if(mp[v[j]] < i)
                {
                    if(mp[v[j]] == 1) temp += 2;
                    else temp++;
                    mp[v[j]]++;
                }
                else
                {
                    cost += k + temp;
                    temp = 0;
                    mp.clear();
                    mp[v[j]]++;
                }
            }
            if(mp.size() > 0)
            {
                cost += k + temp;
            }
            final = min(final, cost);
        }

        printf("%lld\n", final);
        }
        else
        { 
            vi v(n);
            flu(i, 0, n) scanf("%d", &v[i]);
            printf("%d\n", solve(v, 0, n - 1));
        }
    }

    return 0;
}