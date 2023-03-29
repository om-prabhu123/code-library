//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
          long long sum=0;
        int n=str.size();
        bool p=false;
        if(str[0]=='-'){
            p=true;
        }
        if(p){
            for(int i=1;i<n;i++){
           char ch=str[i];
           if(isdigit(ch)){
               sum=sum*10+(ch-'0');
               
           }
           else{
               return -1;
           }
       }
        }
        else{
            for(int i=0;i<n;i++){
           char ch=str[i];
           if(isdigit(ch)){
               sum=sum*10+(ch-'0');
               
           }
           else{
               return -1;
           }
       }
        }
       if(p){
           return sum*-1;
       }
       return sum;
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
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
