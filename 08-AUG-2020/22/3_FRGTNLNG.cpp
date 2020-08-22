
// https://www.codechef.com/problems/FRGTNLNG        

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

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    cin>>t;

    for(int q = 0; q < t; q++){
        int n, k;
        cin>>n>>k;

        string arr[n];

        for(int i = 0; i < n ;i ++){
            cin>>arr[i];
        }

        
        int b[n];

        for(int i = 0 ; i < n; i++){
            b[i] = 0;
        }
        for(int i = 0; i < k; i++){
            int temp;
            cin>>temp;
            string a[temp];

            for(int j = 0; j < temp; j++){
                cin>>a[j];
            }
            
            for(int j = 0; j < n; j++){
                for(int k = 0 ; k < temp; k ++){
                    if(arr[j].compare(a[k]) == 0){
                        b[j] = 1;
                        continue;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(b[i] == 1){
                cout<<"YES"<<" ";
            }
            else{
                cout<<"NO"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}