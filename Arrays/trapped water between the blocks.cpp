/*   Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10 */

//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
       int leftmax[n],rightmax[n];
       leftmax[0]=arr[0];
       rightmax[n-1]=arr[n-1];
       for(int i=1;i<n;i++)
       {
           if(leftmax[i-1]>arr[i])
           {
               leftmax[i]=leftmax[i-1];
           }
           else
           {
               leftmax[i]=arr[i];
           }
       }
       
        for(int i=n-2;i>=0;i--)
       {
           if(rightmax[i+1]>arr[i])
           {
               rightmax[i]=rightmax[i+1];
           }
           else
           {
               rightmax[i]=arr[i];
           }
       }
       
       long long ans=0;
       for(int i=0;i<n;i++)
       {
        ans=ans+min(leftmax[i],rightmax[i]) -arr[i]; 
       }
       return ans;
       
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
