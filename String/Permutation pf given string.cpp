//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	    void recur(int index,string s, vector<string>&ans)
	    {
	        if(index==s.length())
	        {
	            ans.push_back(s);
	            return;
	        }
	        
	        for(int i=index;i<s.length();i++)
	        {
	            swap(s[index],s[i]);
	            recur(index+1,s,ans);
	            swap(s[index],s[i]);
	            
	        }
	    }
		vector<string>find_permutation(string s)
		{
		    
		    vector<string>ans;
		    recur(0,s,ans);
		    return ans;
		    // Code here there
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
