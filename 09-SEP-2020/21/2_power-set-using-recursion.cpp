
// https://practice.geeksforgeeks.org/problems/power-set-using-recursion/1

//Complete this function
void solve(string s, string ans, vector<string> &v, int i)
{
    if(i == s.length())
    {
        v.push_back(ans);
        return;
    }
    solve(s, ans, v, i + 1);
    ans.push_back(s[i]);
    solve(s, ans, v, i + 1);
    return;
}

//Complete this function
vector <string> powerSet(string s)
{
   //Your code here
   vector<string> v;
   string a = "";
   solve(s, a, v, 0);
   return v;
}