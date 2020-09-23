
// https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle/0/?category[]=Recursion&difficulty[]=0&page=1&query=category[]Recursiondifficulty[]0page1

#include <iostream>
using namespace std;

int solve(int n, int k)
{
    if(n == 1) return 1;
    int temp = (solve(n - 1, k) + k) % n;
    if(temp == 0) return n;
    return temp;
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n, k;
	    scanf("%d %d", &n, &k);
	    
	    printf("%d\n", solve(n, k));
	}
	return 0;
}