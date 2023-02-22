/* Given an array of positive integers. Find the length of the longest 
sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.*/



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_set<int>u;
      for(int i=0;i<n;i++)
      {
          u.insert(arr[i]);
      }
      int ans=0;
      
      for(int i=0;i<n;i++)
      {
          if(u.find(arr[i]-1)!=u.end())  //if arr[i]-1 is found in set then simply continue else arr[i] will be starting elelment
          {
              continue;
          }
          else
          {
              int count=0;
              int c=arr[i];
              while(u.find(c)!=u.end())
              {
                  count++;
                  c++;
              }
              ans=max(ans,count);
              
          }
      }
      
      return ans;

    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
