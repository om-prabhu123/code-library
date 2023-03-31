#include<bits/stdc++.h>
using namespace std;
 
int minimumValue (int N, vector<int> A, vector<int> B, vector<int> C) {
   // Write your code here
   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
   sort(C.begin(),C.end());
   int i=0,j=0,k=0;
     int sol=INT_MAX;
   
   while(i<N && j<N && k<N)
   {
      int dif1=abs(A[i]-B[j]);
     int dif2=abs(B[j]-C[k]);
     int dif3=abs(C[k]-A[i]);
 
      int sum=dif1+dif2+dif3;
      sol=min(sum,sol);
 
      if(A[i]<=B[j] && A[i]<=C[k])
      {
         i++;
      }
      else if(B[j]<=A[i] && B[j]<=C[k])
      {
         j++;
      }
      else
      {
         k++;
      }
   }
   
      return sol;
 
 
 
 
 
 
 
 
   
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
    {
    	cin >> A[i_A];
    }
    vector<int> B(N);
    for(int i_B = 0; i_B < N; i_B++)
    {
    	cin >> B[i_B];
    }
    vector<int> C(N);
    for(int i_C = 0; i_C < N; i_C++)
    {
    	cin >> C[i_C];
    }
 
    int out_;
    out_ = minimumValue(N, A, B, C);
    cout << out_;
}
