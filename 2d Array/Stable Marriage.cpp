#include <iostream>
#include<vector>
using namespace std;

bool PreferMore(vector<vector<int>> &prefer, int w,int b, int m)
{
    for(int i=0;i<prefer[0].size();i++)
    {
        if(prefer[w][i] == b)  //old guy comes first, 
          return false;
          
         if(prefer[w][i] == m) //new guy
          return true;
    }
}




void solve()
{
    int n;
    cin>>n; //number of men n women;
    int x;
    vector<vector<int>>prefer((2*n),vector<int>(n));
    
     for(int i=0;i<(2*n);i++)
    {
        cin>>x;        //dont care
        for(int j=0;j<n;j++)
        {
             cin>>x;
             prefer[i][j] = x;     //everyones prefrence
        }
    }
   vector<int> women(n+1,-1);  //all women r free intially
   vector<int> mfree(n+1,true); // all men are free;
   
   int remain=n; // still men who are free;
   
   //llop
   while(remain>0)
   {
       //find a free man;
       int m;
       for(m=1;m<=n;m++)
       {
           if(mfree[m]==true)
           {
               break ; //we got the free man
           }
       }
        
       //after selecting a man iterative over his choices , and after he gets pair come out
       for(int i=0;i<n && (mfree[m]==true);i++)
       {
           int w=prefer[m+n-1][i]; //go to mens prefrence select one by one
           
           //check she is single
           if(women[w]==-1) 
           {
               women[w]=m; //man is paired
               remain--;
               mfree[m]=false; //man is allocated
               
           }
           else
           {
               //if ith girl is paired check if he is the man whom she prefers more
               
               //get her current man
               int pairedman=women[w];
               if(PreferMore(prefer,w-1,pairedman,m))
               {
                   //if he is more prefered
                   women[w]=m;
                    mfree[m] = false; //current man is paired
                     mfree[pairedman] = true; //old man is free
                   
               }
               
           }
       
           
           
       }
   }  
   
       
         vector<int> men(n+1,0);
         for(int i=1;i<=n;i++)
         {
           
             men[women[i]] = i;
         }
         
         for(int i=1;i<=n;i++)
         {
             cout<<i<<" "<<men[i]<<endl;
         }

}






int main() {
    int testCase;
    cin>>testCase;
    while(testCase--)
   {
       
       solve();
   }
	// your code goes here
	return 0;
}
