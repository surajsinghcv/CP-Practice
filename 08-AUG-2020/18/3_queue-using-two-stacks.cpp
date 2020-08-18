
// https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

#include<bits/stdc++.h>
using namespace std;


int main() {

    int q;
    scanf("%d", &q);
    stack<int> st1, st2;

    while(q--)
    {
        int t;
        scanf("%d", &t);

        if(t == 1)
        {
            scanf("%d", &t);
            st1.push(t);
        }
        else if(t == 2)
        {
            if(!st2.empty())
            {
                st2.pop();
            }
            else
            {
                while(!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                st2.pop();
            }
        }
        else
        {
            if(!st2.empty())
            {
                printf("%d\n", st2.top());
            }
            else
            {
                while(!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                printf("%d\n", st2.top());
            }
        }
    }

    return 0;
}
