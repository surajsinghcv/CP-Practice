
// https://practice.geeksforgeeks.org/problems/k-pangrams/0

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, count;
    cin >> t;

    string arr;
    vector<int> v(26, 0);

    while(t--)
    {
        cin >> arr;
        cin >> n;

        for(int i = 0; i < 26; i++) v[i] = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            v[arr[i] - 'a']++;
        }

        count = 0;
        for(int i = 0; i < 26; i++)
        {
            if(v[i] == 0)
            {
                count++;
            }
        }
        cout << ((count <= n) && arr.size() >= 26)  << "\n";
    }
    return 0;
}