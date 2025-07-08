#include <iostream>

using namespace std;

int main(){
    int x,y = 1;
    
    cin>>x;
    
    for(int i=0; i<x; i++){
        for(int j=0; j<4; j++){
            if(y%4==0){
                printf("PUM\n");
            }else{
                printf("%d ", y);
            }
            y++;
        }
    }
}
