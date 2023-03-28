//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int maximumPath(int N, vector<vector<int>> Matrix)
    {
        int Max;
        for(int i=1; i<N; i++){
            for(int j=0; j<N; j++){
                Max=0;
                for(int dj : {-1,0,1}){
                    if (0<=j+dj && j+dj<=N-1)
                        Max = max(Max, Matrix[i-1][j+dj]);
                }
                Matrix[i][j] += Max;
            }
        }
        Max=Matrix[N-1][0];
        for(int j=1; j<N; j++){
            Max = max(Max, Matrix[N-1][j]);
        }
    	return Max;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
