int popMinValue(stack<int>& inputStack)
{
    int max = 0;
    bool once = 1;
    stack<int> copy;
    while (!inputStack.empty())
    {
        if (inputStack.top() >= max || once)
        {
            if (once)
            {
                once = 0;
            }
            else
            {
                copy.push(max);
            }
            max = inputStack.top();
        }
        else
        {
            copy.push(inputStack.top());
        }
        inputStack.pop();
    }
    while (!copy.empty())
    {
        inputStack.push(copy.top());
        copy.pop();
    }
    return max;
}

void SortedStack :: sort()
{
    stack<int> outputStack;
    while(!s.empty())
    {
        int max = popMinValue(s);
        outputStack.push(max);
    }
    while (!outputStack.empty())
    {
        s.push(outputStack.top());
        outputStack.pop();
    }
}