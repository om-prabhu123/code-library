//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        
        int first=-1;
        int second;
        
        for(int i=N-1;i>0;i--)
        {
            if(arr[i]>arr[i-1])
            {
                first=i-1;
                break;
                
            }
        }
        
        if(first!=-1)
        {
          for(int i=N-1;i>first;i--)
          {
            if(arr[i]>arr[first])
            {
                second=i;
                break;
            }
          }
        }
          else
          {
              sort(arr.begin(),arr.end());
              return arr;
          }
        
        swap(arr[first],arr[second]);
         reverse(arr.begin()+first+1,arr.end());
        return arr;
        
        
        
       
        
        // code here
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends