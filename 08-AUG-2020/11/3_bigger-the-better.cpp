
//  https://www.hackerrank.com/challenges/bigger-is-greater/problem

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string arr;

    while(t--)
    {
        cin >> arr;
        int first = -1, first_greater = -1;

        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i - 1] < arr[i])
            {
                first = i - 1;
            }
        }

        if(first == -1)
        {
            cout << "no answer\n";
            continue;
        }

        for(int i = first + 1; i < arr.size(); i++)
        {
            if(arr[first] < arr[i] && (first_greater == -1 || arr[first_greater] > arr[i]))
            {
                first_greater = i;
            }
        }

        char temp = arr[first];
        arr[first] = arr[first_greater];
        arr[first_greater] = temp;

        sort(arr.begin() + first + 1, arr.end());

        cout << arr << "\n";
    }

    return 0;
}
