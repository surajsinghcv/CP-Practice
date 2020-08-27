
// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    vector<long long> v(n);
    stack<long long> st;
    
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        v[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    
    return v;
}