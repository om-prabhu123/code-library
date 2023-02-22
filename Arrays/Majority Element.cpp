//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int maj=size/2;
        map<int,int>m;
        
        
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        
        for(auto i:m)
        {
            if(i.second>maj)
            {
                return i.first;
            }
        }
        return -1;
        // your code here
        
    }
};
