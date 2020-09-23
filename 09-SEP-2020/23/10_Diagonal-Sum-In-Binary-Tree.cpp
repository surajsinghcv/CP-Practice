
// https://practice.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1/?category[]=Recursion&difficulty[]=0&page=1&query=category[]Recursiondifficulty[]0page1

/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/

void solve(Node* root, vector<int> &v, int n)
{
    if(root == NULL) return;
    
    if(n > v.size()) v.push_back(0);
    v[n - 1] += root -> data;
    solve(root -> right, v, n);
    solve(root -> left, v, n + 1);
    
    return;
}

vector <int> diagonalSum(Node* root) {
    // Add your code here
    
    vector<int> v;
    v.push_back(0);
    
    solve(root, v, 1);
    
    return v;
}