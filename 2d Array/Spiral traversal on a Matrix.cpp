//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) 
    {
        // code here 
        int rs,re,cs,ce;
    rs=0;
    re=r-1;
    cs=0;
    ce=c-1;
    int size=r*c;
    vector<int>t;
    
    int k=0;
    while(rs<=re && cs<=ce)
    {
        for(int j=cs;j<=ce && k<size;j++)
        {
           t.push_back(a[rs][j]);
            
            k++;
            
            
        }
        rs++;
        for(int i=rs;i<=re && k<size ;i++)
        {
           t.push_back(a[i][ce]);
            k++;
        }
        
        ce--;
        for(int j=ce;j>=cs && k<size;j--)
        {
            t.push_back(a[re][j]);
            k++;
        }
        re--;
        for(int i=re;i>=rs && k<size;i--)
        {
            t.push_back(a[i][cs]);
            k++;
        }
        cs++;
    }
    return t;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
