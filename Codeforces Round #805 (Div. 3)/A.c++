#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t;
    long long m;
    long long potencia;
    for(int i=0;i<t;i++)
        {
            cin>>m;
            potencia=0;
            int k=0;
            while(true)
                {
                    
                    potencia= pow(10,k);
                    if( potencia>m ){
                        potencia=pow(10,(k-1));
                        //cout<<"potencia: "<<potencia<<endl<<endl;
                        break;
                    }
                    k++;
                }
            
            // Se trabaja con ese valor de potencia
            cout<<m-potencia<<endl;
        }
    
	return 0;
}
