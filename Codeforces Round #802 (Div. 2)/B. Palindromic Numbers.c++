#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	int n;
    int numero;
    int resta;
    int tamano;
    int tmp,mult,divisor;
    
    vector<string> ans;
    string r;
    
    int digit=10;
	for(int i=0;i<t;i++)
	    {
            cin>>n;
            
            tamano = n;
            cin>>r;
            
            
            if( r[0] == '9')
                {
                    numero = 11;
                    
                    mult = 10;
                    divisor = 1;
                    
                    int residuo = 0;
                    tamano--;
                    for(int i_=tamano;i_>=0;i_--)
                        {
                            resta = r[i_]-'0';
                            
                            int tmp = resta+residuo;
                            
                            residuo=0;
                            
                            if((numero-tmp)>9)
                                {
                                    if(numero-tmp == 11)
                                        {
                                            residuo=((tmp%100)/10);
                                            ans.push_back(to_string(1));
                                        }
                                    else
                                        {
                                            residuo=((tmp%100)/10);
                                            ans.push_back(to_string(0));
                                        }
                                }
                            else
                                {
                                    ans.push_back(to_string(numero-tmp));
                                    residuo=1;
                                }
                        }
                    reverse(ans.begin(), ans.end());
            
                    for(auto it: ans) cout<<it;
                    
                    cout<<endl;
                    ans.clear();
                }
            else
                {
                    numero = 9;
                    mult = 10;
                    divisor = 1;
                    
                    for(int i_=0;i_<tamano;i_++)
                        {
                            resta= r[i_]-'0';
                            
                            int tmp = resta;
                            ans.push_back(to_string(numero-tmp));
                        }
                    
                    for(auto it: ans) cout<<it;
                    
                    cout<<endl;
                    ans.clear();
                }
            
            
	    }
	
	return 0;
}
