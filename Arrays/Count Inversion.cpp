/* Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 */



class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    
    long long int merge(long long arr[],int l,int m,int n)
    {
        int n1,n2;
        n1=m-l+1;
        n2=n-m;
        long long  a[n1],b[n2];
        long long int inversion=0;
        
        for(int i=0;i<n1;i++)
        {
            a[i]=arr[i+l];
        }
        for(int i=0;i<n2;i++)
        {
            b[i]=arr[m+i+1];
        }
        int i=0,j=0,k=l;
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j])
            {
                arr[k]=a[i];
                k++;
                i++;
            }
            else
            {
                arr[k]=b[j];
                j++;
                k++;
                inversion=inversion+n1 -i;    //a[i]>b[j]
            }
        }
        
        while(i<n1)
        {
            arr[k]=a[i];
                k++;
                i++;
        }
        while(j<n2)
        {
                arr[k]=b[j];
                j++;
                k++;
            
        }
        return inversion;
    
    }
    
    long long int mergesort(long long arr[],int l,int n)
    {
        long long int i=0;
        if(l<n)
        {
            int m=(l+n)/2;
           i+= mergesort(arr,l,m);
            i+=mergesort(arr,m+1,n);
            i+=merge(arr,l,m,n);
            
        }
        return i;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return (mergesort(arr,0,N-1));
    }

};
