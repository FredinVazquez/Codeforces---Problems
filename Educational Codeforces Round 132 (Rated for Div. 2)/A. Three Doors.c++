#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int key)
    {
        int doors=0;
        for(int i=1;i<4;i++)
            {
                if(v[key] > 0) doors++;
                if(v[key]==0 && i==3) doors++;
                key = v[key];
                
            }
        if(doors==3) cout<<"YES"<<endl;
        else        cout<<"NO"<<endl;
        return;
    }

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin>>t;
	int key;
	vector<int> v(4);
	int a,b,c;
	for(int i=0;i<t;i++)
	    {
	        cin>>key;
	        cin>>a>>b>>c;
	        v[1] = a; 
	        v[2] = b;
	        v[3] = c;
	        
	        solve(v,key);
	    }
	
	
	
	return 0;
}
