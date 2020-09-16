
// https://practice.geeksforgeeks.org/problems/fibonacci-using-recursion/1


//Complete this function
long long fibonacci(int n)
{
    //Your code here
    if(n == 1) return 1;
    if(n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
