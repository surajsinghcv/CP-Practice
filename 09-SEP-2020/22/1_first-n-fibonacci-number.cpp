
// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

// n : given integer value
// print the nth fibb number in the function 

long long solve(int n, vector<long long> &v)
{
    if(v[n] == 1)
    {
        if(n == 0 || n == 1)
        {
            return 1;
        }
        else v[n] = solve(n - 1, v) + solve(n - 2, v);
    }
    return v[n];
}

vector<long long> printFibb(int n) {
    //code here
    vector<long long> v(n, 1);
    v[0] = 1;
    solve(n - 1, v);
    
    return v;
}