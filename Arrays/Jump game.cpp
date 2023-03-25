//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        
      int reachable=0;
        for(int i=0;i<N;i++)
        {
           if(reachable<i)
           {
               return 0;
           }
           
           
           reachable=max(reachable,A[i]+i);
           
            
            
        }
        
        return 1;
    }
};
