
// https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

// Function to calculate span
// price[]: price array in input
// n: size of array
vector <int> calculateSpan(int a[], int n)
{
   // Your code here
   stack<int> st;
   vector<int> v;
   int temp;
   
   for(int i = 0; i < n; i++)
   {
       while(!st.empty() && a[st.top()] <= a[i])
       {
           st.pop();
       }
       temp = st.empty() ? i + 1 : i - st.top();
       st.push(i);
       v.push_back(temp);
   }
   return v;
}