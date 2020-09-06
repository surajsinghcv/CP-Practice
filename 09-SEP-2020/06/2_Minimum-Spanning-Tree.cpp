
// https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1

int find(int x,int par[])
{
    if(x == par[x])
        return x;
    
    par[x] = find(par[x],par);
    return par[x];
}

bool union_(int x,int y,int par[],int rank[])
{
    int p1 = find(x,par);
    int p2 = find(y,par);
    
    if(p1 == p2)
        return false;
    
    if(rank[p1] == rank[p2])
    {
        par[p1] = p2;
        rank[p2]++;
    }
    else if(rank[p1] < rank[p2])
    {
        par[p1] = p2;
    }
    else
        par[p2] = p1;
        
    return true;
    
}

// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX
int spanningTree(int n, int m, vector<vector<int>> &graph) {
    // code here
    
    int par[n+1];
    int rank[n+1];
    for(int i=0; i<=n; i++)
    {
        par[i] = i;
        rank[i] = 0;
    }
    
    vector<pair<int, pair<int, int>>> v;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(graph[i][j] < INT_MAX)
            {
                v.push_back(make_pair(graph[i][j], make_pair(i, j)));
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    int edge = 0;
    int len = 2*m;
    int ans = 0;
    for(int i=0; i<len && edge<(n-1); i++)
    {
        int x = v[i].second.first;
        int y = v[i].second.second;
        int w = v[i].first;
        
        if(union_(x,y,par,rank))
        {
            edge++;
            ans += w;
        }
    }
    return ans;
}