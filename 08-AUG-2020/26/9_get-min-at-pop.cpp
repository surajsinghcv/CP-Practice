
// https://practice.geeksforgeeks.org/problems/get-min-at-pop/1

stack<int> _push(int arr[],int n)
{
   // your code here
   int mi = INT_MAX;
   stack<int> st;
   for(int i = 0; i < n; i++)
   {
       mi = min(mi, arr[i]);
       st.push(mi);
   }
   return st;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>st)
{
    // your code here
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return;
}