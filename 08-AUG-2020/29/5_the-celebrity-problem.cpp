
// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

// The task is to complete this function

// M[][]: input matrix
// n: size of matrix (n*n)
int getId(int v[MAX][MAX], int n)
{
    //Your code here
    int ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(v[ans][i] == 1)
        {
            ans = i;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(i != ans && (v[ans][i] == 1 || v[i][ans] == 0))
        {
            return -1;
        }
    }
    
    return ans;
}