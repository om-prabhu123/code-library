


//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    top++;
    if(top==1000)
    {
        cout<<"Stack overflow";
        top--;
    }
    else
    {
        arr[top]=x;
    }
    // Your Code
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code       
    if(top==-1)
    {
        return -1;
    }
    else
    {
        int t=arr[top];
        top--;
        return t;
    }
}
