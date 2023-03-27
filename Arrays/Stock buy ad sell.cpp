//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> a, int n){
        // code here
        // vector<vector<int>>ans;
        
        // int buy=0;
        // int sell=1;
        
        // while(sell<n)
        // {
        //     if(A[sell]<A[buy]) //sell< buy means buy on that sell day
        //     {
        //         buy=sell; //buying on sell day
        //         sell++; //increment sell
                
                
        //     }
        //     else
        //     {
        //         while(sell+1 <n && A[sell]<A[sell+1]) //loop till u find sell+1 element is smaller
        //         {
        //             sell++;
        //         }
        //     }
        //     vector<int>v;
        //     v.push_back(buy);
        //     v.push_back(sell);
        //     ans.push_back(v);
        //     buy = sell+1; //don't forget to update the buy and sell again.
        //     sell = buy + 1;
        // }
        
        vector<vector<int>>ans;

        for(int i=0; i<n-1; i++){

            if(a[i] < a[i+1]){

                ans.push_back({i, i+1});

            }

        }

        return ans;
        //lets buy on day 1 and sell on day 2
        // return  ans;
        
    }
};
