//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   vector<int> minPartition(int N)
    {
        vector<int> ans;
        vector<int> money = {2000, 500, 200, 100, 50,20, 10, 5,2,1};
        int i=0;
        while(N!=0){
            if(money[i]>N)i++;
            else{
                N-=money[i];
                ans.push_back(money[i]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
