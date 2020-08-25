#include<bits/stdc++.h>
using namespace std;

stack<string> st, temp;

// print path of current working directory.
void print(string s)
{
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    cout << "Path to current dir : \n";
    cout << "                     root:~";

    while(!temp.empty())
    {
        cout << temp.top();
        st.push(temp.top());
        temp.pop();
    }
    cout << "\n";
    return;
}

// Level up in directory pop from stack
void remove(string s)
{
    for(int i = 1; i < s.length(); i++)
    {
        if(st.empty())
        {
            return;
        }
        st.pop();
    }
    return;
}

// Simple push path in stack.
void insert(string s)
{
    string temp = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(i > 0 && s[i] == '/')
        {
            st.push(temp);
            temp = "/";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }

    st.push(temp);

    return;
}

// To handle queries with [] first level up then insert new path.
void removeinsert(string s)
{
    string temp = "", dots = "";

    for(int i = 1; i < s.length() - 1; i++)
    {
        if(s[i] != '.')
        {
            temp.push_back(s[i]);
        }
        else
        {
            dots.push_back(s[i]);
        }
    }

    remove(dots); // first level up then insert new path.
    insert(temp);

    return;
}

int main()
{
    int q;
    cout << "Enter number of queries : ";
    cin >> q;
    cout << "\n";

    string s;

    for(int i = 1; i <= q; i++)
    {
        cout << "Enter querie no " << i << " : ";
        cin >> s;
        if(s[0] == 'P' || s[0] == 'p')
        {
            print(s);
        }
        else if(s[0] == '.')
        {
            remove(s);
        }
        else
        {
            if(s[0] != '[')
            {
                insert(s);
            }
            else if(s[0] == '[')
            {
                removeinsert(s);
            }
        }
        cout << "\n";
    }

    return 0;
}