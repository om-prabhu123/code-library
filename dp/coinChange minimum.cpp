class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {



     vector<int> dp(amount+1, 1e8);
     
        dp[0]=0;

        for(int i=1;i<=amount;i++)
        {
           for(auto x: coins)
           {
               if(i-x>=0)
               {
                   dp[i]=min(dp[i],dp[i-x]+1);
               }
           }            
        }
        if(dp[amount]==1e8)
        {
            return -1;
        }
        return dp[amount];
    }
};
