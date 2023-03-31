#include <iostream>
#include<algorithm>
using namespace std;

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
        sort(a,a+n);
        int m=a[0];
        int count=1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]==m)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        
        cout<<n-count<<endl;
    }
	// your code goes here
	return 0;
}
