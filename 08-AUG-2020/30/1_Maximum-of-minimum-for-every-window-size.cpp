
// https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1

// Function to print maximum of minimum of every window size
// arr[]: input array
// N: size of array
vector <int> printMaxOfMin(int v[], int n) {
    // Your code here
    stack<int> st;
    int index, temp;
    vector<int> ans(n + 1, 0);

    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && v[st.top()] >= v[i])
        {
            index = st.top();
            st.pop();
            temp = (st.empty() ? i : i - st.top() - 1);
            ans[temp] = max(ans[temp], v[index]);
        }
        st.push(i);
    }

    while(!st.empty())
    {
        index = st.top();
        st.pop();
        temp = st.empty() ? n : n - st.top() - 1;
        ans[temp] = max(ans[temp], v[index]);
    }

    for(int i = n - 1; i > 0; i--)
    {
        ans[i] = max(ans[i], ans[i + 1]);
    }
    
    for(int i = 0; i < n + 1; i++)
    {
        if(ans[i] != 0)
        {
            for(int j = 0; i < i; j++)
            {
                ans[j] = ans[i];
            }
            break;
        }
    }

    for(int i = n; n >= 0; i--)
    {
        if(ans[i] != 0)
        {
            for(int j = n; j > i; j--)
            {
                ans[j] = ans[i];
            }
            break;
        }
    }
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
    {
        a[i] = ans[i + 1];
    }
    
    return a;
}