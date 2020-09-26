
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-list/1/?category[]=Recursion&difficulty[]=1&page=1&query=category[]Recursiondifficulty[]1page1

//User function Template for C++

Node* addSameSize(Node* head1, Node* head2, int* carry) 
{ 
	// Your code here
	if(head1 == NULL)
	{
	    return NULL;
	}
	
	Node* root = new Node(0);
	root -> next = addSameSize(head1 -> next, head2 -> next, carry);
	
	int sum = head1 -> data + head2 -> data + *carry;
	*carry = sum / 10;
	sum %= 10;
	root -> data = sum;
	return root;
} 

void addCarryToRemaining(Node* head1, Node* curr, int* carry, Node** result) 
{ 
	// Your code here
	if(head1 != curr)
	{
	    addCarryToRemaining(head1 -> next, curr, carry, result);
	    int sum = head1 -> data + *carry;
	    *carry = sum / 10;
	    sum %= 10;
	    Node* root = new Node(sum);
	    root -> next = *result;
	    *result = root;
	}
}
