#include <iostream>

using namespace std;

int main(){
    int n, b = 0, p = 0;
    cin>>n;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(j%2 != 0){
                if(i%2!=0){
                    b++;
                }else{
                    p++;
                }
            }else{
                if(i%2!=0){
                    p++;
                }else{
                    b++;
                }
            }
        }
    }
    printf("%d casas brancas e %d casas pretas\n", b,p);
}
