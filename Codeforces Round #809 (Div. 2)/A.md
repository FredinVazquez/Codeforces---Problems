#include <bits/stdc++.h>
using namespace std;   

void solve(int n, int m)
    {
        vector<int> v(n);
        string s(m,'B');
        int position = 0;
        for(int i=0;i<n;i++)
            {
                cin>>v[i];
                
                position = min((v[i])-1,(m + 1 - v[i])-1);
                
                if(s[position] == 'A')
                    {
                        position = max((v[i])-1,(m + 1 - v[i])-1);
                        s[position] = 'A';
                    }
                else
                s[position] = 'A';
                
            }
        
        cout<<s<<endl;
        return;
    }

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    int n,m;
    
    for(int i=0;i<t;i++)
        {
            cin>>n>>m;
            solve(n,m);
        }
    
    
	return 0;
}
