//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
        vector<int>a;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                a.push_back(matrix[i][j]);
            }
        }
        
        sort(a.begin(),a.end());
        
       
        int m=(a.size())/2;
    
        return a[m];
        
    }
};
