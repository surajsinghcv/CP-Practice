
// https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1

void twoStacks :: push1(int x)
{
    if(top1 + 1 < top2)
    {
        arr[++top1] = x;
    }
    return;
}
   
/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
{
    if(top2 - 1 > top1)
    {
        arr[--top2] = x;
    }
    return;
}
   
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1()
{
    if(top1 < 0)
    {
        return -1;
    }
    else
    {
        return arr[top1--];
    }
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks :: pop2()
{
    if(top2 == size)
    {
        return -1;
    }
    else
    {
        return arr[top2++];
    }
}