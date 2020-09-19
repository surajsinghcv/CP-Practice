
// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1

//Complete this function

void permutations(string str, int i, int n,vector<string>&v)
{
    if (i == n - 1)
    {
        v.push_back(str);
        return;
    }

    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]); 

        permutations(str, i + 1, n,v);

        swap(str[i], str[j]);
    }
}


vector<string> permutation(string S)
{
    vector<string> v;
    permutations(S,0,S.length(),v);
    sort(v.begin(),v.end());
    return v;
}