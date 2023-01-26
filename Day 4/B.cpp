#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int dp[2][MAXN];

void solve(int n)
    {
        vector<int> v(n+1); // c<=n
        
        for(int i=0;i<n;i++)
            {
                cin>>v[i];        
            }
        
        
        // DP
        for(int i=0;i<2;i++) for(int j=0;j<=n;j++)  dp[i][j] = 0;
        
        for(int i=0;i<n;i++)
            {
                // Different parity
                if(i%2==0)
                    dp[0][v[i]] = max(dp[0][v[i]], dp[1][v[i]]+1); // Check with odd, Different parity
                else
                    dp[1][v[i]] = max(dp[1][v[i]], dp[0][v[i]]+1); // Check with even, Different parity
            }
            
        // We print max of each number
        for(int i=1;i<=n;i++)
            {
                cout<<max(dp[1][i],dp[0][i])<<" ";
            }
        cout<<endl;
        return;
    }

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin>>t;
	int n;
	for(int i=0;i<t;i++)
	    {
	        cin>>n;
	        solve(n);
	    }
	
	return 0;
}
