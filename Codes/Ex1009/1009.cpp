#include <iostream>

using namespace std;

int main(){
    string nome;
    double sal, bon, calc;
    
    cin>>nome>>sal>>bon;
    
    calc = sal+(bon*0.15);
    
    printf("TOTAL = R$ %.2lf\n",calc);
}
