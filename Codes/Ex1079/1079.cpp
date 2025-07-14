#include <iostream>

using namespace std;

int main(){
    float m,n,x,y,z;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y>>z;
        
        m = ((x*2)+(y*3)+(z*5))/10;
        
        printf("%.1f\n",m);
    }
    return 0;
}
