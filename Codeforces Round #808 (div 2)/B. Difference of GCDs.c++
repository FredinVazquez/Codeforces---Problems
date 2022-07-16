#include <bits/stdc++.h>
using namespace std;

// Se debe de observar los multiplos, tal que gcd(2,4) == 2, el gcd de un número con su multiplo es igual al número

// gcd(i, muli_i) == i NO USAR DOUBLE 
// C++ guarda la parte entera de la división de dos números int

int main() {
    
    int t; cin>>t;
    
    int a;
    long long b,c;
    // a= len
    // b to c numeros
    
    for(int i=0;i<t;i++)
        {
            cin>>a>>b>>c;
            
            long long divisor;
            
            long long ans;
            
            vector<long long> v;
            int bandera= 1;
            
            for(int j=1;j<=a;j++)
                {
                    
                    /*divisor = b/j;
                    divisor = floor(divisor);
                    cout<<"divisor "<<divisor<<endl; ESTO DA ERROR POR EL REDONDEO
                    ans = divisor*j;*/
                    
                    divisor = b/j;
                    
                    if(b%j > 0){        // Solo en caso de que exista parte decimal se hace la suma.
                        divisor++;
                    }
                    
                    ans = divisor*j;
                    
                    if(ans<=c)  v.push_back(ans);
                    else{
                        cout<<"NO"<<endl;
                        bandera=0;
                        break; 
                    }                
                }
            
            if(bandera==1)
                {
                    cout<<"YES"<<endl;
                    for(auto it: v) cout<<it<<" ";
                    cout<<endl;
                }
            
        }
	
	
	return 0;
}
