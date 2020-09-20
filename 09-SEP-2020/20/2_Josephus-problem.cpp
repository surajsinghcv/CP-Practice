
// https://practice.geeksforgeeks.org/problems/josephus-problem/1

int josephus(int n, int k)
{
   //Your code here
   if(n == 1)
    {
   		return 1;
   	}

   int ans = ((josephus(n - 1, k) + k) % n);

   if(ans == 0)
   	{
   		return n;
   	}
   	
   return ans;
}