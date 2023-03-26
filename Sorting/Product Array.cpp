//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       int i=0,j=0;
       long long int p=1;
       if(n == 1)
          return {1};
       vector<long long int> ans;
       while(i<n && j<n)
      {
           
          
          if(j!=i)
          {
              p*=nums[j]; //multiply other element
              j++;
          }
          else 
          {
              j++;
          }
          
          if(j==n)
          {
              ans.push_back(p);
              p=1;
              i++;
              j=0;
          }
      }
      return ans;
       
        //code here        
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
