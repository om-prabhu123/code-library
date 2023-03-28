//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{

  public:

    unordered_map<string, int> dp;

    

    int helper(string& str, int start ,int end)

    {

        if (start > end)

            return 0;

        if (start == end)

            return 0;

        string key = to_string(start)+"_"+to_string(end);

        if(dp.find(key) != dp.end())

        {

            return dp[key];

        }

        

        if(str[start] == str[end])

        {

            dp[key] = helper(str, ++start, --end);

            

        }

        else 

        {

            dp[key] = std::min(helper(str, start+1, end), helper(str, start, end-1))+1;

        }

        return dp[key];

    }

    int countMin(string str){

    //complete the function here

       return helper(str, 0, str.size()-1);

    }

};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends
