#include <iostream>
using namespace std;

int main() {
	//code
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
	    string ans="";
	    for(int j=i;j<s.length();j++)
	    {
	        ans=ans+s[j];
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
