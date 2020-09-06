
// https://practice.geeksforgeeks.org/problems/detect-cycle-using-dsu/1


int find(int x, int parent[])
{
    if(parent[x] == x)
    {
        return x;
    }
    parent[x] = find(parent[x], parent);
    return parent[x];
}

bool Union(int a, int b, int parent[], int rank[])
{
    int i = find(a, parent);
    int j = find(b, parent);
    
    if(i == j)
    {
        if(a != i && b != i)
        {
            return 1;
        }
        return 0;
    }
    
    if(rank[i] < rank[j]) parent[i] = j;
    else if(rank[i] > rank[j]) parent[j] = i;
    else parent[j] = i, rank[i]++;
    
    return 0;
}

// User function Template for C++

/*  Function to check if there is cycle in graph
*   adj[]: array of vectors to represent graph
*   n and e are number of nodes and edges respectively
*   parent[]: array to store parent of nodes. Each index stores its node value
* initially
*   rank1[]: Each node from 1 to n store initial size as 1.
*/
bool findCycle(vector<int> adj[], int parent[], int rank[], int n, int e) {

    // your code here
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < adj[i].size(); j++)
        {
            if(Union(i, adj[i][j], parent, rank) && i < adj[i][j])
            {
                return 1;
            }
        }
    }
    
    return 0;
}