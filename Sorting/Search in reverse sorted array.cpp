class Solution {

  



    
public:
    int search(vector<int>& a, int target) {
        
        int low=0;
        int high=a.size()-1;

        while(low<=high)

        {

            int mid=(low+high)/2;

            if(a[mid]==target)
            {
                return mid;
            }
            //left halft sorted??

            if(a[low]<=a[mid])
            {
                //sorted
                //check key exits in left half
                if(target>=a[low] && target<=a[mid])
                {
                    high=mid-1; 
                }
                else
                {
                    //go to right half
                    low=mid+1;
                }
            }
            else //right half sorted
            {
                if(target>=a[mid] && target<=a[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }

            }
        }
        return -1;
       
    }
};
