//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    
    //Write your code here..
    
    vector<int>profit(price.size(),0);
    
    int maxprice=price[price.size()-1];
    for(int i=price.size()-2;i>=0;i--)
    {
        if(price[i]>maxprice)
        {
            maxprice=price[i];
        }
        
            profit[i]=max(profit[i+1],maxprice-price[i]);
        
    }
    int minprice=price[0];
     for(int i=1;i<price.size();i++)
    {
        if(price[i]<minprice)
        {
            minprice=price[i];
        }
        
            profit[i]=max(profit[i-1],profit[i]+(price[i]-minprice));
        
    }
    return profit[price.size()-1];
    
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends
