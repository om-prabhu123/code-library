class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            
            
            int i;
            int j;
            
            i=n-1;
            j=0;
            
            while(i>=0 && j<m)
        {
            if(arr1[i]>arr2[j])
            {
                swap(arr1[i],arr2[j]);
                
            }
            i--;
                j++;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
            // code here 
        } 
};
