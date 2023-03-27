//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool match(string wild, string pattern)
    {
        // code here
        
         for(int k = 0; k < i; k++)
            if(p[k] != '*') return 0;
        return 1;
    }
    bool match(string wild, string pattern)
    {
        int n = wild.size(), m = pattern.size();
        vector<int> prev(m + 1, 0), curr(m + 1, 0);
        prev[0] = 1;
        
        for(int i = 1; i <= n; i++) {
            curr[0] = allStars(wild, i); // j becomes 0
            for(int j = 1; j <= m; j++) {
                if(wild[i - 1] == pattern[j - 1] or wild[i - 1] == '?')
                    curr[j] = prev[j - 1];
                else if(wild[i - 1] == '*')
                    curr[j] = prev[j] or curr[j - 1];
                else 
                    curr[j] = 0;
            }
            prev = curr;
        }
        
        return prev[m];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends
