#include <bits/stdc++.h>
using namespace std;

/*
const int MAXN = 100100;
int answer[MAXN];
void solve(int n) // MLE SOLUTION
    {
        vector<int> v(n+1);
        
        for(int i=1;i<=n;i++)
            {
                cin>>v[i];        
            }
        
        int dp[n+1][MAXN];
        // DP
        memset (dp,0,sizeof(dp));
        
        
        for(int i=1;i<=n;i++)
            {
                for(int j=0;j<i;j++)
                    {
                        if(((i%2==0) && (j%2!=0)) || ((i%2!=0) && (j%2==0)))
                            {
                                dp[i][v[i]] = max( dp[i][v[i]], dp[j][v[i]]+1);
                                
                            }
                    }
            }
            
        // We print max of each number
        for(int i=0;i<=n;i++) answer[i] = 0;
        
        
        int ans  = -1;
        for(auto it: v)
            {
                if(answer[it] > 0) continue;
                
                ans = -1;
                for(int j=1;j<=n;j++)
                    {
                        ans = max (ans,dp[j][it]);
                    }
                answer[it] = ans;
            }
                
        for(int i=1;i<=n;i++)    cout<<answer[i]<<" ";
        
        cout<<endl;
        return;
    }
*/

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
