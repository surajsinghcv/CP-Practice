
// https://practice.geeksforgeeks.org/problems/print-all-possible-strings/1/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1

/*You have to complete this function*/

void solve(char str[], int i, int n, set<string> &v, string a)
{
    if(i == n)
    {
        v.insert(a);
        return;
    }
    solve(str, i + 1, n, v, a + str[i]);
    solve(str, i + 1, n, v, a + ' ' + str[i]);
}

vector<string>  spaceString(char str[])
{
//Your code here
    set<string> v;
    int n = strlen(str);
    string a = "";
    a.push_back(str[0]);
    solve(str, 1, n, v, a);
    
    vector<string> ans;
    for(auto i : v) ans.push_back(i);
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}