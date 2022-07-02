#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Solo se puede movimiento adyacentes, no en diagonal.
	// No se puede saltar pasos
	// Al parecer el mejor camino siempre es formando una L
	int t; cin>>t;
	
	int n,m; // n: renglones, m: columnas 
	
	for(int i=0;i<t;i++)
	    {
	        cin>>n>>m;
	        //vector<vector<int>> dp(n+1,vector<int>(m+1));
            long long ans=0;
            
	        for(int a=1;a<=m;a++)
	            {
	                ans += a;        
	            }
	        
	        for(int a=2;a<=n;a++)
	            {
	                ans += (( (a)-1 )*m)+m;        
	            }
	        cout<<ans<<endl;
	    }
	
	return 0;
}
