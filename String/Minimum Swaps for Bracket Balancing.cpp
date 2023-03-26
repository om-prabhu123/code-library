//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        
        
    int open=0,cls=0,f=0;
    int ans=0;
    for(int i=0;i<S.length();i++)
    {
        
        if(S[i]==']')
        {
            cls++;
            f=cls-open;
        }
        else
        {
            open++;
            if(f>0)
            {
                ans=ans+f;
                f--;
            }
        }
    
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
