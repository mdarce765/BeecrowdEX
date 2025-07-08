#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n",(i+1),n,(i+1)*n);
    }
    
    return 0;
}
