#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double r, v, pi=3.14159;
    
    cin>>r;
    v = (4.0/3)*pi*pow(r,3);
    printf("VOLUME = %.3lf",v);
    return 0;
}
