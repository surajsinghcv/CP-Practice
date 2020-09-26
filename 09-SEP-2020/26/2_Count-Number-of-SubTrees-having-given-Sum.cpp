
// https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/?category[]=Recursion&problemStatus=unsolved&difficulty[]=1&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]1page1

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// your are required to complete this function
// function should return the count of the number of 
// subtrees with Sum equal to X

int solve(Node* root, int x, int &count)
{
    if(root == NULL) return 0;
    int temp = solve(root -> right, x, count) + solve(root -> left, x, count) + root -> data;
    if(temp == x) count += 1;
    return temp;
}

int countSubtreesWithSumX(Node* root, int x)
{
	// Code here
	int count = 0;
	solve(root, x, count);
	return count;
}