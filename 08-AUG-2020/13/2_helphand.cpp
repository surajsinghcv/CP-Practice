
// https://www.codechef.com/DEM2020/problems/HELPHAND

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
#define MAX 1000010

vector <int> primes; 
void prime() 
{ 
    bool isComposite[MAX] = {false}; 
    for (int i=2; i*i<=MAX; i++) 
    { 
        if (isComposite[i]==false) 
            for (int j=2; j*i<=MAX; j++) 
                isComposite[i*j] = true; 
    } 
    for (int i=2; i<=MAX; i++) 
        if (isComposite[i]==false) 
            primes.push_back(i); 
} 

int Count(int n) 
{ 
    int count = 0;
    for (int i=0; i<primes.size() && primes[i]<=n; i++) 
    { 
        count++;
    } 
    return count; 
}

void solve()
{
    int n;
        cin >> n;
        if(n == 1)
        {
            cout << "0\n";
            return;
        }
        else if(n == 2)
        {
            cout << "1\n";
            return;
        }
        cout << Count(n) - 1 + n - 2 << "\n";
}

int main() 
{ 
    prime(); 

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0; 
} 
