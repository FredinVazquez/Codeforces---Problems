#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	int a,b,c,d;
	int ans = 0;
	for(int i=0;i<t;i++)
	    {
	        cin>>a;
	        ans = 0;
	        for(int j=0;j<3;j++)
	            {
	                cin>>b;
	                if(a<b) ans++; 
	            }
	        cout<<ans<<endl;
	    }
	return 0;
}
