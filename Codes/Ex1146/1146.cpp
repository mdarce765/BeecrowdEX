#include <iostream>

using namespace std;

int main(){
    int x;
    
    while(cin>>x){
        for(int i=1; i<=x; i++){
            if(i!=x){
                printf("%d ",i);
            }else{
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
