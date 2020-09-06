
// https://practice.geeksforgeeks.org/problems/number-of-connected-components/1


//User function Template for C++

int find(int x, int arr[])
{
    if(arr[x] == x)
    {
        return x;
    }
    return find(arr[x], arr);
}

/* This function does union of 2 nodes a and b */
// a : node 1 
// b : node 2
// arr : array (n+1) size with elements from 1 to N equal to its index.
// rank1 : array (n+1) size with all elements equal to 1. 
// n : Number of nodes
void unionNodes( int a, int b, int arr[], int r[], int n) {
    a = find(a, arr);
    b = find(b, arr);
    
    if(a == b)
    {
        return;
    }
    
    if(r[a] < r[b]) arr[a] = b;
    else if(r[a] > r[b]) arr[b] = a;
    else arr[b] = a, r[a]++;
    return;
}

/* This function returns number of connected components */
// arr : array (n+1) size with elements from 1 to N equal to its index.
// rank1 : array (n+1) size with all elements equal to 1. 
// n : Number of nodes
int findNumberOfConnectedComponents( int n, int arr[], int rank1[]) {
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == i)
        {
            count++;
        }
    }
    return count;
}