
// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> st;
    
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == '[' || x[i] == '(' || x[i] == '{')
        {
            st.push(x[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if((x[i] == ']' && st.top() == '[') || (x[i] == '}' && st.top() == '{') || (x[i] == ')' && st.top() == '('))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
}