//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    //001
    int flips = 0;
    for(int i=0;i<S.size();i++){
        if(i%2==0){
            if(S[i]=='1')
                flips++;
        }
        else{
            if(S[i]=='0')
                flips++;
        }
    }
    
    //above is for forming 101
    
    //bwloe for 010
    int temp = S.size()-flips;   
    return min(flips,temp);
    
    
}
