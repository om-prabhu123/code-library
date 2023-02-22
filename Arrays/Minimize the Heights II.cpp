/*Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.

Increase the height of the tower by K
Decrease the height of the tower by K
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.*/

// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        if(n==1)
        {
            return 0;
        }
        
        sort(arr,arr+n);
        int dif=arr[n-1]-arr[0];
        // code here
        int minn,maxx;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k<0)continue;
            
            minn=min(arr[0]+k,arr[i]-k);
            maxx=max(arr[n-1]-k,arr[i-1]+k);
            
            dif=min(dif,maxx-minn);
        }
        return dif;
    }
};




