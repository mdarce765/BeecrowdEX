#include <iostream>

using namespace std;

int main(){
    int x,y;
    
    while(cin>>x>>y){
        if(x<y){
            printf("Crescente\n");
        }else if(x>y){
            printf("Decrescente\n");
        }
    }
    return 0;
}
