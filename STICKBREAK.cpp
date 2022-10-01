#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t,k,l;
	cin>>t;
	while(t--)
	{
	    cin>>k>>l;
	    if(k%l==0)
	      cout<<0<<endl;
	    else
	      cout<<1<<endl;
	}
	return 0;
}
