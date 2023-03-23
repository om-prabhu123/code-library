#include <iostream>
using namespace std;


void fun(string temp,int i,int n,string s)
{
    if(i==n)
    {
        cout<<temp<<endl;
    }
    else
    {
        fun(temp,i+1,n,s);
        temp=temp+s[i];
        fun(temp,i+1,n,s);
        
    }
}




int main() {
	//code
	
	string s;
	cin>>s;
	fun("",0,s.length(),s);
	return 0;
}
