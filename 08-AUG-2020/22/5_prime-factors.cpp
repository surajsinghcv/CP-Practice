
// https://practice.geeksforgeeks.org/problems/prime-factors/0

#include <bits/stdc++.h>
using namespace std;

void primefactor(int n)
{
    set<int> st;
    
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            st.insert(i);
            n /= i;
        }
    }
    
    if(n > 1) st.insert(n);
    
    for(set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        printf("%d ", *it);
    }
    printf("\n");
    
    return;
}

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    primefactor(n);
	}
	
	return 0;
}