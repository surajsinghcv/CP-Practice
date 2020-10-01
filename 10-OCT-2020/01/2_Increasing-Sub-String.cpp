
// https://practice.geeksforgeeks.org/problems/increasing-sub-sequence/0

#include<bits/stdc++.h>
using namespace std;

int BS(std::vector<int> v, int val)
{
    int l = 0, r = v.size() - 1, mid;
    while(r > l)
    {
        mid = (r + l) / 2;
        if(v[mid] >= val && (mid - 1 < 0 || v[mid - 1] < val))
            return mid;
        else if(v[mid] < val)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return r;
}

int solve(string a)
{
    int n = a.length();
    vector<int> b;
    b.push_back(a[0] - 'a');
    int index;

    for(int i = 1; i < n; i++)
    {
        if(a[i] - 'a' > *b.rbegin())
        {
            b.push_back(a[i] - 'a');
        }
        else
        {
            index = BS(b, a[i] - 'a');
            b[index] = a[i] - 'a';
        }
    }

    return b.size();
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;

        cout << solve(a) << "\n";
    }

    return 0;
}