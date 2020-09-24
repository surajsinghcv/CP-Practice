
// https://practice.geeksforgeeks.org/problems/flood-fill-algorithm/0/?category[]=Recursion&difficulty[]=0&page=1&query=category[]Recursiondifficulty[]0page1

#include <bits/stdc++.h>
using namespace std;

void solve(int **arr, int n, int m, int x, int y, int k)
{
    if(x >= n || x < 0 || y >= m || y < 0)
    {
        return;
    }
    
    int val = arr[x][y];
    arr[x][y] = k;
    
    if(x + 1 < n && arr[x + 1][y] == val) solve(arr, n, m, x + 1, y, k);
    if(x - 1 >= 0 && arr[x - 1][y] == val) solve(arr, n, m, x - 1, y, k);
    
    if(y + 1 < m && arr[x][y + 1] == val) solve(arr, n, m, x, y + 1, k);
    if(y - 1 >= 0 && arr[x][y - 1] == val) solve(arr, n, m, x, y - 1, k);
    
    return;
}

int main() {
	//code
	// freopen("input.txt", "r", stdin);
 //    freopen("myoutput.txt", "w", stdout);
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n, m;
	    scanf("%d%d", &n, &m);
	    int **arr = new int*[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        arr[i] = new int[m];
	        for(int j = 0; j < m; j++)
	        {
	            scanf("%d", &arr[i][j]);
	        }
	    }
	    
	    int x, y, k;
	    scanf("%d%d%d", &x, &y, &k);
	    
	    solve(arr, n, m, x, y, k);
	    
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < m; j++)
	        {
	            printf("%d ", arr[i][j]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}