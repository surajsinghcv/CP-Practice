
// https://codeforces.com/problemset/problem/1373/A

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


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    ll t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(c==a)
            cout<<-1<<" "<<b<<"\n";
        else if(c>a){
            if(c<a*b){
                cout<<1<<" "<<b<<"\n";
            }
            else
                cout<<1<<" "<<-1<<"\n";
        }
        else{
            if(c>a*b)
                cout<<b<<" "<<1<<"\n";
            else
                cout<<-1<<" "<<1<<"\n";
        }
    }

    return 0;
}