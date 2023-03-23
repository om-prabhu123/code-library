class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        
        int c0=0,c1=0;
        int count=0;
        int len=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
            
            if(c1==c0)
            {
             count++;
             len+=c0+c1;
             c1=0;
             c0=0;
            }
        }
        
        if(len!=str.size())
        {
            return -1;
        }
        return count;
    }
};
