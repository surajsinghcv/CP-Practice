
// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1

void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code
        int n = q1.size() - 1;
        if(q1.empty())
        {
            return -1;
        }
        
        while(n--)
        {
            q1.push(q1.front());
            q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        return temp;
}