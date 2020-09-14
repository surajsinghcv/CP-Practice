
// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/dummy3-4/description/

#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int key)
    {
        this -> data = key;
        left = NULL;
        right = NULL;
    }
};

node* head = NULL;

void insert(int key)
{
    node* temp = new node(key);

    if(head == NULL)
    {
        head = temp;
        return;
    }
    node* root = head;

    while(root != NULL)
    {
        if(root -> data < key)
        {
            if(root -> right == NULL)
            {
                root -> right = temp;
                return;
            }
            else root = root -> right;
        }
        else
        {
            if(root -> left == NULL)
            {
                root -> left = temp;
                return;
            }
            else root = root -> left;
        }
    }
    return;
}

int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(height(root -> right), height(root -> left)) + 1;
}

int main()
{
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        head = NULL;
        int n, m;
        scanf("%d", &n);

        while(n--)
        {
            scanf("%d", &m);
            insert(m);
        }
        printf("%d\n", height(head));
    }

    return 0;
}