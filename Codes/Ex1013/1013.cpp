#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a,b,c,aux,m;
    
    cin>>a>>b>>c;
    
    aux = ((a+b+abs(a-b))/2);
    m = ((aux+c+abs(aux-c))/2);
    
    printf("%d eh o maior\n",m);
    
    return 0;
}
