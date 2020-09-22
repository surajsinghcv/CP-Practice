
// https://practice.geeksforgeeks.org/problems/print-pattern/0/?category[]=Recursion&page=1&query=category[]Recursionpage1

#include <iostream>
using namespace std;

void solve(int n)
{
    printf("%d ", n);
    if(n <= 0) return;
    solve(n - 5);
    printf("%d ", n);
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    solve(n);
	    printf("\n");
	}
	return 0;
}