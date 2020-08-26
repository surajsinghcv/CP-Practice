
// https://practice.geeksforgeeks.org/problems/remove-duplicates/0

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    string s, a = "";
    getline(cin, s);
    while(t--)
    {
        a = "";
        getline(cin, s);

        vector<bool> v(127, 1);
        for(int i = 0; i < s.length(); i++)
        {
            if(v[s[i]])
            {
                a.push_back(s[i]);
                v[s[i]] = 0;
            }
        }
        cout << a << "\n";
    }
    return 0;
}