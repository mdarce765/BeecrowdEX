#include <iostream>

using namespace std;

int main(){
    int x,y;
    
    cin>>x>>y;
    
    for(int i=1; i<=y; i++){
        printf("%d",i);
        if(i%x == 0){
            printf("\n");
        }else{
            printf(" ");
        }
    }
    return 0;
}
