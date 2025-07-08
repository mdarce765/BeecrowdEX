#include <iostream>

using namespace std;

int main(){
    int x,y,aux,s=0;
    
    cin>>x>>y;
    
    if(y < x){
        aux = y;
        y = x;
        x = aux;
    }

    for(int i=x; i<=y;i++){
        if(i%13 != 0){
            s += i;
        }
    }
    printf("%d\n",s);
    return 0;
}
