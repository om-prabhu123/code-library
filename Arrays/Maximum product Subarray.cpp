/*  Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray. */


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long p=1;
	    
	    long long best_p=INT_MIN;
	    
	        if(n==1)
	        {
	            return arr[0];
	        }
	   for(int i=0;i<n;i++)
	   {
	       p=p*arr[i];
	       best_p=max(best_p,p);
	       if(p==0)
	       {
	           p=1;
	       }
	   }
	   long long best_pR=INT_MIN;
	   p=1;
	   for(int i=n-1;i>=0;i--)
	   {
	       p=p*arr[i];
	       best_pR=max(best_pR,p);
	       if(p==0)
	       {
	           p=1;
	       }
	   }
    
	    return max(best_p,best_pR);
	}
};
