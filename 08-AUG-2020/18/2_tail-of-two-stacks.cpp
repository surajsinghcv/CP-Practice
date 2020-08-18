
// https://www.hackerrank.com/challenges/ctci-queue-using-two-stacks/problem

class MyQueue {
  
    public:
        stack<int> st1, st2;   
        void push(int x) {
            st1.push(x);
            return;
        }

        void pop() {
            if(!st2.empty())
            {
                st2.pop();
                return;
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

        int front() {
            if(!st2.empty())
            {
                return st2.top();
            }
            else
            {
                while(!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                return st2.top();
            }
        }
};