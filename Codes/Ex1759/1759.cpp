#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        printf("Ho");
        if(i == n-1){
            printf("!\n");
        }else{
            printf(" ");
        }
    }
    return 0;
}
