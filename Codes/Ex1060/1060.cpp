#include <iostream>

using namespace std;

int main(){
    double x, y=0;
    
    for(int i=0; i<6; i++){
        cin>>x;
        if(x>0){
            y++;
        }
    }
    printf("%.0lf valores positivos\n",y);
    return 0;
}
