#include <iostream>

using namespace std;

int main(){
    float n, t = 0, s = 0;
    
    for(int i=0; i<6; i++){
        cin>>n;
        if(n>0){
            t++;
            s += n;
        }
    }
    printf("%.0f valores positivos\n%.1f\n",t,(s/t));
    return 0;
}
