#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin>>t;
	int n;
	long long contador =0 ;
	int bandera = 0;
	long long numero;
	for(int i=0;i<t;i++)
	    {
	        cin>>n;
	        contador=0;
	        bandera = 0;
	        vector<long long> v(n+1,0);
	        vector<long long> v2(n+1,0);
	        
	        for(int j=0;j<n;j++)
	            {
	                cin>>v[j];
	            }
	        
	        for(int j=(n-1);j>=0;j--)
	            {
                    if(v2[v[j]] == 0)
                        {
                            contador++;
                            v2[v[j]] = 1;
                        }
                    else
                        {
                            break;
                        }
	            }
	        cout<<n-contador<<endl;
	    }
	return 0;
}
