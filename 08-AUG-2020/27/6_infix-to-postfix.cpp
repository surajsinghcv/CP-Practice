
// https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

stack<char> st;

bool operent(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')  ? true : false;
}

bool opening(char c)
{
    return (c == '[' || c == '{' || c == '(') ? true : false;
}

bool closing(char c)
{
    return (c == ']' || c == ')' || c== '}') ? true : false;
}

bool HigherOrEqualPree(char c)
{
    if(c == '^')
    {
        return (st.top() == '^') ? true : false;
    }
    else if(c == '*' || c == '/')
    {
        return (st.top() == '^' || st.top() == '*' || st.top() == '/') ? true : false;
    }
    else
    {
        return true;
    }
}


// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s)
{
    int n = s.length();
    string a = "";

    for(int i = 0; i < n; i++)
    {
        if(operent(s[i]))
        {
            a.push_back(s[i]);
        }
        else if(opening(s[i]))
        {
            st.push(s[i]);
        }
        else if(closing(s[i]))
        {
            while(!opening(st.top()))
            {
                a.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && !opening(st.top()) && HigherOrEqualPree(s[i]))
            {
                a.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }

    return a;
}