
// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

//You need to complete this function
stack<int> deleteMid(stack<int>s,int size,int current)
{
    //Your code here
    int mid = ceil(size / 2.0);
    stack<int> st;
    
    if(size & 1)mid--;
    
    while(mid--)
    {
        st.push(s.top());
        s.pop();
    }
    
    s.pop();
    
    while(!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
    return s;
}