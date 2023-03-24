class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans;
        int index=0;

        for(int i=0;i<strs[0].length();i++)
        {
            char ch=strs[0][i];
           bool match=true;
            for(int j=1;j<strs.size();j++)
            {
                if(ch!=strs[j][i])
                {
                    match=false;
                    break;
                }
            }
            if(match==false)
            {
                 return ans;
            }
          ans.push_back(ch);
        }
        return ans;
    }
};
