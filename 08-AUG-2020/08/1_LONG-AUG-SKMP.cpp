
// https://www.codechef.com/AUG20B/problems/SKMP       

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
    // fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        string a, b, temp = "";
        cin >> a >> b;
        vi v(26, 0);
        int n = a.size(), m = b.size();

        flu(i, 0, n)
        {
            v[a[i] - 'a']++;
        }
        flu(i, 0, m)
        {
            v[b[i] - 'a']--;
        }

        flu(i, 0, 26)
        {
            flu(j, 0, v[i]) temp.pb(char(i + 'a'));
        }

        bool flag = 1, flag2 = 1;
        int s1, s2;
        n = temp.size();

        flu(i, 0, temp.size())
        {
            if(temp[i] < b[0])
            {
                cout << temp[i];
            }
            else
            {
                flag = 1;
                s1 = i, s2 = 0;
                while(flag2)
                {
                    if(temp[s1] == b[s2])
                    {
                        s2++;
                        if(s2 == m)
                        {
                            flag = 0;
                            flag2 = 0;
                            break;
                        }
                        if(s1 == n)
                        {
                            break;
                        }
                    }
                    else if(temp[s1] < b[s2])
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        flag2 = 0;
                        flag = 0;
                        break;
                    }
                }
                if(flag) cout << temp[i];
                else
                {
                    cout << b << temp[i];
                    
                }
            }
        }
        if(flag2)
        {
            cout << b;
        }
        cout << "\n";
    }

    return 0;
}