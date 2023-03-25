




//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    if(top1==-1)
    {
        top1=1;
    }
    else
    {
        // if(top1==99)
        // {
        //     return -1;
        // }
        top1=top1+2;
    }
    arr[top1]=x;
    
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
  
    top2=top2-2;
 
   arr[top2]=x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1==-1)
    {
        return -1;
    }
    else
    {
        int ans=arr[top1];
        top1-=2;
        return ans;
    }

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
   if(top2==100)
   {
       return -1;
   }
   else
   {
       int ans=arr[top2];
       top2=top2+2;
       return ans;
   }
}
