/*


You are given an array A of length  N
 A subarray is called special if the XOR and Sum of the subarray are the same. Find the number of special subarrays of A.



*/



#include <iostream>
using namespace std;
 
 
void findSubArray(int a[],int n)
{
	int count=0;
	int left=0,right=0;
	int sol=0;
	for(left=0;left<n;left++)
	{
		while((sol+a[right])==(sol^a[right]) and right<n)
		{
			sol=sol+a[right];
			right++;
		}
		count=count+right-left;
		if(left==right)
		{
			right++;
		}
		else
		{
			sol=sol-a[left];
		}
	}
	cout<<count<<endl;
}
int main() {
int test;
cin>>test;
 
while(test--)
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	findSubArray(a,n);
}
}
