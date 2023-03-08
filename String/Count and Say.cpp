/*

Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"

*/








class Solution {
public:
    string countAndSay(int n) {
        
        //base case
        if(n==1)
        {
            return "1";
        }
     
        string s=countAndSay(n-1); //first go till 1
        string ans="";
        int count=0;

        for(int i=0;i<s.length();i++)
        {
            count++;

            if(i==s.length()-1 || s[i]!=s[i+1])
            {
                ans=ans+to_string(count)+s[i];
                count=0;
            }
        }

        return ans;



    }
};
