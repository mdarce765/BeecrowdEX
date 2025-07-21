#include <iostream>

using namespace std;

int main(){
    double hrs, vlm, c;
    
    cin>>hrs>>vlm;
    
    c = (hrs * vlm)/12;
    
    printf("%.3lf\n",c);
    
    return 0;
}
