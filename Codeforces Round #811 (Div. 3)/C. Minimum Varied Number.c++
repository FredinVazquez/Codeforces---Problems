#include <bits/stdc++.h>
using namespace std;

void solve(int numero)
    {
        vector<int> v;
        if(numero >= 10)
            {
                for(int i=9;i>=1;i--)
                    {
                        if(numero-i >= 0)
                            {
                                v.push_back(i);
                                numero-=i;
                            }
                    }
                reverse(v.begin(),v.end());
                for(auto it: v) cout<<it;
                cout<<endl;
            }
        else
            cout<<numero<<endl;
        
    }

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin>>t;
	
	int numero;
	
	for(int i=0;i<t;i++)
	    {
	        cin>>numero;
	        solve(numero);
	    }
	
	return 0;
}
