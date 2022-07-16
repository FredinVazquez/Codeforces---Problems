#include <bits/stdc++.h>
using namespace std;

// El truco está en que el primer número debe ser multiplo con todos los números lo cual produce que las 
// restas que se puedan encontrar sean exactamente 0.


int main() {
    
    int t; cin>>t;
    
    
    
    for(int i=0;i<t;i++)
        {
            int len; cin>>len;
            vector<int> v(len+1);
            for(int i=1;i<=len;i++)
                {
                    cin>>v[i];
                }
            int bandera=1;
            for(int i=1;i<=len;i++)
                {
                    if(v[i]%v[1])
                        {
                            cout<<"NO"<<endl;
                            bandera= 0;
                            break;
                        }
                }
            if(bandera) cout<<"YES"<<endl;
        }
    
	return 0;
}
