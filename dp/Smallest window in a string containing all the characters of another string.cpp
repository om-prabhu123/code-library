//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
          // Your code here
        string ans=s;
        int ln=INT_MAX;
        
        int c=p.size();
        unordered_map<char,int> m;
        for(auto i:p)
        {
            m[i]++;
        }
        int i=0,j=0,n=s.size();
        while(j<n)
        {
            if(m.find(s[j])!=m.end())
            {
                 if(m[s[j]]<=0)
                 {
                     m[s[j]]--;
                 }
                 else
                   {c--;
                   m[s[j]]--;
                   }
                
            }
            
            while(c==0)
            {
                if(j-i+1<ans.size())
                {
                    ln=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
                if(m.find(s[i])!=m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]]>0) c++;
                    
                }
                i++;
            
            }
            j++;
            
        }
        int f=0;
        /*for(int i=0;i<p.size();i++)
        {
            if(m[p[i]]>0) 
              f=1;
              break;
        }*/
        if(ln==INT_MAX ) return "-1";
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
