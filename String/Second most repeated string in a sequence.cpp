//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
          //code here
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        int m1=-1;
        int sm=-1;
        string s,s2;
        for(auto x:mp)
        {
            
            if(m1<x.second)
            {
                sm=m1;
                s2=s;
                m1=x.second;
                s=x.first;
                
            }
            
            //what if it is greater than only second max
            else if(sm<x.second && x.second != m1)
            {
                sm=x.second;
                s2=x.first;
            }
        }
        
        return s2;
        
        
        
        //code here.
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
