//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int maxrow=-1;
	    int maxones=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                int remain= m-j;
	                if(maxones<remain)
	                {
	                    maxones=remain;
	                    maxrow=i;
	                    break;
	                }
	            }
	        }
	    }
	    return maxrow;
	}

};
