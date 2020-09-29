
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1/?track=ppc-dp&batchId=221

// Returns the maximum value that  
// can be put in a knapsack of capacity W 

int memo[1005][1005];

int solve(int wt[], int val[], int n, int w)
{
    if(w == 0 || n == 0) memo[w][n] = 0;
    else if(memo[w][n] == -1)
    {
        memo[w][n] = solve(wt, val, n - 1, w);
        if(wt[n - 1] <= w)
        {
            memo[w][n] = max(solve(wt, val, n - 1, w - wt[n - 1]) + val[n - 1], memo[w][n]);
        }
    }
    return memo[w][n];
}

int knapSack(int w, int wt[], int val[], int n) 
{ 
   // Your code here
   memset(memo, -1, sizeof(memo));
   solve(wt, val, n, w);
   return memo[w][n];
}