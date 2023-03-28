//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
  public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {

        int i,j;
        vector<int> dp(n+1);
        
        for(i=n-1;i>=0;i--){
            int a=INT_MIN;
            int b=INT_MIN;
            int c = INT_MIN;
            
            if(i+x<=n)  
                a = 1+dp[i+x];
                
            if(i+y<=n)  
                b = 1+dp[i+y];
                
            if(i+z<=n)  
                c = 1+dp[i+z];
                
            dp[i] = max(a,max(b,c));
        }
        
        if(dp[0]<0)
            return 0;
            
        return dp[0];    
        
        
        /*
        int res =  solve(n,x,y,z,dp);
        
        if(res<0)
            return 0;
            
        return res;*/
    }
    
    int solve(int n, int x, int y, int z,vector<int> &dp){
        if(n==0)
            return 0;
        
        int a=INT_MIN;
        int b=INT_MIN;
        int c = INT_MIN;
        
        if(dp[n]!=-1)
            return dp[n];
        
        if(n-x>=0)
            a = 1+solve(n-x,x,y,z,dp);
        
        if(n-y>=0)
            b = 1+solve(n-y,x,y,z,dp);
            
        if(n-z>=0)
            c = 1+solve(n-z,x,y,z,dp);
            
        return dp[n] = max(a,max(b,c));
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
