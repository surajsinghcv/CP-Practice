
// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    queue<ll> temp;
    stack<ll> st;
    for(int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        temp.push(q.front());
        q.pop();
    }
    
    return temp;
}