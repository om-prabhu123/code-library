//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        
        multimap<int,int,greater<int>>m;
        
        for(int i=0;i<n;i++)
        {
            int c=__builtin_popcount(arr[i]);
            m.insert({c,arr[i]});
        }
        
        
        
        // for(auto x:m)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        // Your code goes here
        
         int i=0;
        for(auto it:m){
            arr[i]=it.second;
            i++;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
