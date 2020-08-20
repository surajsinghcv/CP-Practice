
// https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range/0

#include <bits/stdc++.h>

using namespace std;

vector<int> v(100001 , 1);

void seive(){
    v[0] = v[1] = 0;
    
    for(int i = 2; i*i <= 100001; i++)
    {
        if(v[i])
        {
            for(int j = 2*i; j <= 100001; j += i)
            {
                v[j] = false;
            }
        }
    }
    return;
}
int main() {
	//code
	
	seive();
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int l , r;
	    scanf("%d%d", &l, &r);
	    
	    for(int i = l; i <= r; i++)
	    {
	        if(v[i])
	        {
	            printf("%d ", i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}