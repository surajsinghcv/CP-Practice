
// https://www.spoj.com/problems/ONP/

#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

stack <int> st;

bool operent(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')  ? true : false;
}

bool opening(char c){
    return c == '{' || c == '[' || c == '(' ? true : false;
}

bool closing(char c){
    return c == '}' || c == ']' || c == ')' ? true : false;
}

bool HigherOrEqualPree(char top, char c){
    if(c == '^'){
        return top == '^' ? true : false;
    }
    else if(c == '*' || c =='/'){
        return top == '^' || top == '*' || top == '/' ? true : false;
    }
    else return true;
}


string InfixToPostfix(string arr){
    string s;
    int n = arr.length();
    for(int i = 0; i < n; i++){
        if(operent(arr[i])){
            s.push_back(arr[i]);
        }
        else if(opening(arr[i])){
            st.push(arr[i]);
        }
        else if(closing(arr[i])){
            while(!opening(st.top())){
                s.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && HigherOrEqualPree(st.top(), arr[i])){
                if(opening(st.top())){
                    break;
                }
                s.push_back(st.top());
                st.pop();
            }
            st.push(arr[i]);
        }
    }
    while(!st.empty()) s.push_back(st.top()) , st.pop();

    return s;
}

int32_t main()
{
    fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    string s;
    int t;
    cin >> t;

    while(t--)
    {
        cin >> s;

        cout << InfixToPostfix(s) << endl;
    }
    
    return 0;
}