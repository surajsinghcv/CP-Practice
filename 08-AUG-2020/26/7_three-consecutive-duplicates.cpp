
// https://practice.geeksforgeeks.org/problems/three-consecutive-duplicates/0

#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int n = s.length();
    stack<pair<char, int>> st;

    for(int i = 0; i < n; i++)
    {
        if(st.empty() || st.top().first != s[i])
        {
            st.push(make_pair(s[i], 1));
        }
        else if(st.top().second < 2)
        {
            st.top().second++;
        }
        else
        {
            st.pop();
        }
    }

    s = "";

    while(!st.empty())
    {
        n = st.top().second;

        while(n--)
        {
            s.push_back(st.top().first);
        }
        st.pop();
    }

    if(s.empty())
    {
        cout << "-1\n";
        return;
    }

    for(int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << "\n";

    return;
}

int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s);

    while(t--)
    {
        
        getline(cin, s);
        solve(s);
    }
    return 0;
}