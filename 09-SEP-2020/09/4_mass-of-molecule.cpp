
// https://www.spoj.com/problems/MMASS/

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


int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    char str[105];
    stack<int> st;
    int temp;

    scanf("%s", str);

    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            temp = st.top();
            st.pop();
            st.push(temp * (str[i] - '0'));
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if(str[i] == 'H') st.push(1);
            else if(str[i] == 'C') st.push(12);
            else if(str[i] == 'O') st.push(16);
        }
        else if(str[i] == '(') st.push(0);
        else
        {
            temp = 0;
            while(!st.empty() && st.top() != 0)
            {
                temp += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
            st.push(temp);
        }
    }

    temp = 0;
    while(!st.empty())
    {
        temp += st.top();
        st.pop();
    }

    printf("%d\n", temp);

    return 0;
}