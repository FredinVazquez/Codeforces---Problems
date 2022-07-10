#include <bits/stdc++.h>
using namespace std;


void solve(string s)
    {
        
        int tope=3;
        int ans=0;
        int i=0,j=0;
        //for(int i=0;i<s.size();i)
            while(i<s.size())
            {
                unordered_map<char, int> map;        
                int c=0;
                while(true)
                    {
                        //if(i>s.size()) return;
                        map[s[i]]++;
                        if(map[s[i]]==1)
                            {
                                c++;
                                
                                if(c>3){
                                    break;}
                            }
                        i++;   
                        
                    }
                ans++; 
                
            }
        cout<<ans<<endl;
        
        return;
    }

int main() {
    
    int t; cin>>t;
    
    string s; // 2*10^5
    
    for(int i=0;i<t;i++)
        {
            cin>>s;
            solve(s);
        }
    
	return 0;
}
