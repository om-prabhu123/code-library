//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int plindrome(string s)
    {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    
      long long int  fun(string t,int i,int n,string s)
    {
         long long int c=0;
        if(i==n)
        {
            if(t!="")
            {
                   
                   return plindrome(t);
            }
         
        }
        else
        {
            c=c+fun(t,i+1,n,s);
            t=t+s[i];
            c=c+fun(t,i+1,n,s);
            return c;
            
        }
    }
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
        
        
        
        return fun("",0,str.length(),str);
       //Your code here
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends
