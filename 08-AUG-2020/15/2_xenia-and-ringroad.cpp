
// https://codeforces.com/problemset/problem/339/B

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define flu(i, s, e) for(ll i = s; i < e; i++)
#define fld(i, s, e) for(ll i = s; i >= e; i--)

#define pb push_back

int main(){
	fast;

	int n, m; cin >> n >> m;
	int arr[m]; flu(i, 0, m) cin >> arr[i];

	ll count = 0;
	flu(i, 0, m){
		if(i == 0){
			count += arr[i] - 1;
			continue;
		}
		if(arr[i] > arr[i - 1]){
			count += arr[i] - arr[i - 1];
			continue;
		}
		if(arr[i] < arr[i - 1]){
			count += (n - arr[i - 1] + arr[i]);
			continue;
		}

	}
	cout << count << endl;
	return 0;
}