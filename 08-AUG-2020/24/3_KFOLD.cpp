
// https://www.codechef.com/COOK121B/problems/KFOLD

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

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string arr;
        cin >> arr;

        int count0 = 0, count1 = 0;
        flu(i, 0, n)
        {
            if(arr[i] == '0') count0++;
            else count1++;
        }

        if(count0 == 0 || count1 == 0 || n == k)
        {
            sort(arr.begin(), arr.end());
            cout << arr <<"\n";
            continue;
        }

        int temp = n / k;

        if((count0 % temp != 0) || (count1 % temp != 0))
        {
            cout << "IMPOSSIBLE\n";
            continue;
        }
        else
        {
            count0 /= temp;
            count1 /= temp;
            flu(i, 1, temp + 1)
            {
                if((i & 1))
                {
                    flu(j, 0, count0) cout << '0';
                    flu(j, 0, count1) cout << '1';
                }
                else
                {
                    flu(j, 0, count1) cout << '1';
                    flu(j, 0, count0) cout << '0';
                }
            }
            cout << "\n";
        }
    }

    return 0;
}