
// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1

#include <bits/stdc++.h>
using namespace std;

void solve(string a, int l, int r, vector<string> &v)
{
    if (l == r)  
        v.push_back(a); 
    else
    {   
        for (int i = l; i <= r; i++)  
        {  
  
            swap(a[i], a[l]);  
   
            solve(a, l+1, r, v);  
  
            swap(a[l], a[i]);  
        }  
    }  
}

int main() {
	//code
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s;
	    cin >> s;
	    vector<string> v;
	    
	    solve(s, 0, s.length() - 1, v);
	    
	    sort(v.begin(), v.end());
	    for(auto i : v) cout << i << " ";
	    cout << "\n";
	}
	
	return 0;
}