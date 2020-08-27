
// https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1

stack<int> st;

bool number(char c)
{
    if(c >= '0' && c <= '9')
    {
        return true;
    }
    return false;
}

int solve(char c)
{
    int temp = st.top();
    st.pop();
    if(c == '+')
    {
        temp += st.top();
    }
    else if(c == '-')
    {
        temp = st.top() - temp;
    }
    else if(c == '*')
    {
        temp *= st.top();
    }
    else
    {
        temp = st.top() / temp;
    }
    
    return temp;
}
// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    // Your code here
    int temp;
    for(int i = 0; i < str.length(); i++)
    {
        if(number(str[i]))
        {
            st.push(str[i] - '0');
        }
        else
        {
            temp = solve(str[i]);
            st.pop();
            st.push(temp);
        }
    }
    return st.top();
}