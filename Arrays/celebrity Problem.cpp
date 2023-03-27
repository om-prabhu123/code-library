//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
    
    //----------------------------------------------------------------------------O(N) space complexity
    //     unordered_set<int>s;
    //     for(int i=0;i<n;i++)
    //     {
    //         s.insert(i);
    //     }
    //     for(auto x: s)
    //     {
           
    //         for(int j=0;j<n;j++)
    //         {
    //             if(M[x][j]==0 and x!=j)
    //             {
                   
    //                 s.erase(j); // j cant person not a celebrity
    //             }
                
    //         }
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //         if(i==*(s.begin()))
    //         {
    //             continue;
    //         }
    //          if(M[i][*(s.begin())]==0)
    //          {
    //              return -1;
    //          }
    //     }
       
    //   return *(s.begin());
    //--------------------------------------------------------------------------------------------------------
      int celeb=0;
      int index=-1;
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    f=1;
                    
                    break;
                }
            }
            if(f==0)
            {
                index=i;
                celeb++;
            }
        }
    
    if(celeb>1)
    {
        return -1;
    }
    
    return index;
    
        // code here 
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
