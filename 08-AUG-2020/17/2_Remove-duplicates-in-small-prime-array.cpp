
// https://practice.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1

vector<int> removeDuplicate(vector<int>& arr, int n)
{
    // code here
    vector<int> v;
    unordered_set<int> st;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(st.find(arr[i]) == st.end())
        {
            st.insert(arr[i]);
            v.push_back(arr[i]);
        }
    }
    return v;
}