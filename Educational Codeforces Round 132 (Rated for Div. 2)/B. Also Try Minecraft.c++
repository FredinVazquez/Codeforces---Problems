#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	
	vector<long long> v(n);
	
	// Processing:
	vector<long long> des(n,0);
	vector<long long> asc(n,0);
	
	des[0] = 0;
	asc[n-1] = 0;
	
	for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	
	
	for(int i=1;i<n;i++)
	    {
	        if(v[i-1] > v[i] )
	            {
	                des[i] = (v[i-1]-v[i]);
	            }
	        des[i] += des[i-1];  
	    }
	
	reverse(v.begin(), v.end());
	
	for(int i=1;i<n;i++)
	    {
	        if(v[i-1] > v[i] )
	            {
	                asc[i] = (v[i-1]-v[i]);
	            }
	        asc[i] += asc[i-1];  
	    }
	reverse(asc.begin(), asc.end());
	
	/*
	for(auto it: des) cout<<it<<" ";
	cout<<endl;
	for(auto it: asc) cout<<it<<" ";*/
	
	
	long long s,t;
	
	for(int i=0;i<m;i++)
	    {
	       cin>>s>>t;
	       s--; t--;
	       if(s < t)
	        {
	            cout<<abs(des[s] - des[t])<<endl;
	        }
	       else
	        {
	            cout<<abs(asc[s] - asc[t])<<endl;
	        }
	       
	    }
	    
	return 0;
}
