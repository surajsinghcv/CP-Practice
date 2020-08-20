
// https://www.codechef.com/CENS2020/problems/CENS20A       

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
 
int main() {
    fast
    int n,m;
    cin>>n>>m;
    int a[n][m],i,j,pre[n][m];
    string s[n];
    for(i=0;i<n;i++)
        cin>>s[i];

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            a[i][j] = s[i][j]-'0';
            pre[i][j]=0;
        }
    }

    int q;
    cin>>q;
    int x1,y1,x2,y2;
    while(q--) {
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        y2--;
        x2--;
        pre[x1][y1]++;
        if(x2+1<n && y2+1<m)
            pre[x2+1][y2+1]++;
        if(x2+1<n)
            pre[x2+1][y1]--;
        if(y2+1<m)
            pre[x1][y2+1]--;
    }

    for(i=0;i<m;i++) {
        for(j=1;j<n;j++) {
            pre[j][i] += pre[j-1][i];
        }
    }
    
    for(i=0;i<n;i++) {
        for(j=1;j<m;j++) {
            pre[i][j] += pre[i][j-1];
        }
    }
    
    
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(pre[i][j]%2) {
                if(a[i][j] == 1)
                    cout<<0;
                else
                    cout<<1;
            }
            else
                cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
} 