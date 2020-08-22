
// https://www.codechef.com/problems/RAINBOWA       

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
    cin >>t;
    while(t--)
    {
        int n;
        bool rainbow=true;
        cin>>n;
        int arr[n];
        int check[11];
    
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
                check[arr[i]]=1;                
            
        }
        int mid;

        if(n%2!=0)
        {
            mid=int(n/2);
        }
        else
        {
            mid=(n/2)-1;
        }
        if(arr[mid]!=7)
        {
            rainbow=false;
        }
        
        if(n<13) 
        {
            rainbow=false;
        }
        
        for (int i=1;i<=7;i++)
        {
            if(check[i]!=1)
            {
                rainbow=false;
                break;
            }
        }   

        for (int i=0;i<n;i++)
        {
            if(arr[i]>7)
            {
                rainbow=false;
                break;
            }
        }

        for (int i=1;i<n;i++)   
        {
            if(abs(arr[i]-arr[i-1]) >=2)
            {
                rainbow=false;
                break;
            }
        }
    
        if(rainbow)
        {
        
            for(int i=0; i<=n/2;i++)
            {
                if(arr[i]!=arr[n-1-i])
                {
                    rainbow=false;
                    break;
                }
            }
            
            if(arr[0] !=1 || arr[n-1]!=1)
            {
                rainbow=false;
            }   
        }
        
        if(rainbow)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }

    return 0;
}