/* Given an array A of n positive numbers. The task is to find the first Equilibrium Point in an array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)*/
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int index=-1;
        //int sumleft=a[0],sumright=a[n-1];
       // int j=n-2;
        //int k=1;
        // if(n==1)
        // {
        //     return 1;
        // }
        // for(int i=0;k<=j;i++)
        // {
        //     if(sumleft==sumright && k==j)
        //     {
        //         return k+1;
        //     }
        //     else if(sumleft>sumright)
        //     {
        //         sumright=sumright+a[j];
        //         j--;
        //     }
        //     else if(sumright>sumleft)
        //     {
        //         sumleft=sumleft+a[k];
        //         k++;
                
        //     }
        // }
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        int lsum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum-a[i];
            if(sum==lsum)
            {
                return i+1;
            }
            lsum=lsum+a[i];
        }
        
        return index;
    }

};
