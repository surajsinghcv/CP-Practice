
// https://practice.geeksforgeeks.org/problems/disjoint-set-union-find/1


/*Complete the functions below*/
int find(int a[],int x)
{
       //add code here
       if(a[x] == x)
       {
           return x;
       }
       return find(a, a[x]);
}
void unionSet(int a[],int x,int z)
{
	//add code here.
	x = find(a, x);
	z = find(a, z);
	
	if(x == z)
	{
	    return;
	}
	
	a[x] = z;
	return;
}