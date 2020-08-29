
// https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1

// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
long getMaxArea(long long v[], int n){
    
    // Your code here
    stack<int> st;
    long long ans = 0, temp;
    int index;
    
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && v[st.top()] >= v[i])
        {
            index = st.top();
            st.pop();
            temp = v[index] * (st.empty() ? i : i - st.top() - 1);
            ans = max(ans, temp);
        }
        st.push(i);
    }
    
    while(!st.empty())
    {
        index = st.top();
        st.pop();
        temp = v[index] * (st.empty() ? n : n - st.top() - 1);
        ans = max(ans, temp);
    }
    
    return ans;
    
}